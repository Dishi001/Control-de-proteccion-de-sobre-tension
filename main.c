#include "mylib.h"


int main(int argc, char *argv[]) {
    
    init_mcu();

    while (1) monitoreo_tension();
    return 0;
}
