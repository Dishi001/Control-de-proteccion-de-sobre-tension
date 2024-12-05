#include "mylib.h"


int main(int argc, char *argv[]) {
    estados_t estados = monitoreo;
    estados_t (*fsm[2])(void) = (monitoreo_tension, desconexion)

    init_mcu();

    while (1) estados = (*fsm[estados]) ();
    return 0;
}
