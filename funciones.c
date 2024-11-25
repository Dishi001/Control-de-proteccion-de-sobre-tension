#include "mylib.h"
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "LPC845.h"

void ADC(void) {
    SYSCON -> PDRUNCFG &= ~(1 << 4); // Encender el ADC
    SYSCON->SYSAHBCLKCTRL0 |= (1 << 24); // Habilito el clock del ADC
    ADC0 -> CTRL |= (1 << 30); 
    ADC0 -> SEQ_CTRL[0] = (1 << 31) | (1 << 0); 
}

void Pin_Rele(void) {
    SYSCON -> SYSAHBCLKCTRL0 |= (1 << 6); 
    GPIO -> DIR[0] |= (1 << 0);  
}

float monitoreo_tension(float V_max){
    float V_medido;
    while (1){
        ADC0->SEQ_CTRL[0] |= (1 << 26); // Iniciao de conversión
        while (!(ADC0 -> SEQ_GDAT[0] & (1 << 31))); 

        uint32_t Resultado_ADC = (ADC0->SEQ_GDAT[0] >> 4) & 0xFFF; 
        V_medido = (Resultado_ADC * V_max) / 1024; // Convertir a Volt

        if (V_medido > V_max) desconexion();
        else conexion();
        return !(GPIO->PIN[0] & (1 << 5));
    }
}

void desconexion (void){
     GPIO -> CLR[0] = (1 << 5); // Apago el rele
     printf ("El sistema fue desconectado por sobretension");
     return;
}

void conexion (void){
    GPIO -> SET[0] = (1 << 5); // Encender el relé
    printf ("El sistema funciona sin problemas");
    return;
}
