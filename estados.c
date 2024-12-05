#include "mylib.h"

estados_t monitoreo_tension(void){
    float voltaje; 
    voltaje = leer_voltaje();
    if (voltaje < VOLTAJE_REF){
        conectar_rele();
        return monitoreo;
    }
    else{
        desconectar_rele();
        return desconectar;
    }
}

estados_t desconexion(void){
    float voltaje; 
    voltaje = leer_voltaje();
    if (voltaje >= VOLTAJE_REF){
        desconectar_rele();
        return desconectar;
    }
    else{
        conectar_rele();
        return monitoreo;
    }
}
