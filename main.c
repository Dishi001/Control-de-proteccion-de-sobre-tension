#include "mylib.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int V_max = 0, exit = 1, l;

    while (exit == 1)
    {
        printf ("#####################################\n");
        printf ("Control de proteccion de sobre tesion\n");
        printf ("#####################################\n");
        
        printf ("\n1) Comenzar monitoreo de tension\n");
        printf ("2) Seleccionar tension maxima\n");
        printf ("3) Salir\n");

        scanf("%d", &l);
        system("cls");

        switch (l)
        {
        case 1:
            if (V_max != 0) monitoreo_tension(V_max);
            else printf ("Seleccione una tension maxima antes de comenzar el monitoreo");
            break;
        
        case 2:
            printf ("Que tension desea seleccionar como maxima?\n");
            scanf ("%f", &V_max);
            system("cls");
            break;
        
        case 3:
            exit = 0;
            break;
            
        
        }
    } 
    return 0;
}
