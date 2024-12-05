#include "mylib.h"

void monitoreo_tension(void){
    float voltaje; 
    voltaje = leer_voltaje();
    if (voltaje < VOLTAJE_REF){
        conectar_rele();
    }
    else{
        desconectar_rele();
    }
}
