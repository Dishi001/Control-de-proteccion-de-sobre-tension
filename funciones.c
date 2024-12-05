#include "mylib.h"

uint32_t conv = 0;

void init_mcu (void){
    LPC_Init();
    ADC_Init(ADC_0);
}

int leer_adc (int canal){
    return (int) conv;
}

float leer_voltaje (void){
    return ((float)leer_adc(PINADC) * VOLTAJE_REF) / 4096;
}

void desconectar_rele (void){
    GPIO_SetPIN(LedGREEN, LED_OFF);
    GPIO_SetPIN(LedBLUE, LED_OFF);
}


void conectar_rele (void){
    GPIO_SetPIN(LedGREEN, LED_ON);
    GPIO_SetPIN(LedBLUE, LED_ON);
}