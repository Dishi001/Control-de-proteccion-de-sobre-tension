#ifndef MYLIB_H
#define MYLIB_H

#include "LPC845.h" 
#include <stdio.h>

typedef enum{
    monitoreo = 0;
    desconectar = 1;
} estados_t 

void init_mcu(void);
int leer_adc(int canal);
float leer_voltaje (void);
estados_t monitoreo_tension(void);
estados_t desconexion(void);
void conectar_rele(void);
void desconectar_rele(void);

#define PINADC 0u
#define VOLTAJE_REF 3.3

#endif