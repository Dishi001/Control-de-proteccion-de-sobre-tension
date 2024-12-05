#ifndef MYLIB_H
#define MYLIB_H

#include "LPC845.h" 
#include <stdio.h>

#define PINADC 0u
#define VOLTAJE_REF 3.3

void init_mcu(void);
int leer_adc(int canal);
float leer_voltaje (void);
void monitoreo_tension(void);
void conectar_rele(void);
void desconectar_rele(void);

#endif