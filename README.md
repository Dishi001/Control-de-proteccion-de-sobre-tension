# Control de proteccion de sobre tension

## Memoria descriptiva
El proyecto es un control de protección de sobretensión con un valor de tensión máxima (Vmax) configurable. El objetivo es proteger un sistema eléctrico desconectándolo automáticamente cuando la tensión excede el valor máximo configurado. La tensión del sistema es monitoreada de forma continua a través de un sensor de voltaje. De momento, simularemos su funcionamiento en Proteus o otro simulador.

El sistema comienza en un estado normal de funcionamiento mientras la tensión medida (V) se mantenga por debajo de la tensión máxima configurada (Vmax). Si la tensión excede el valor máximo, el sistema activa un estado de desconexión para proteger los dispositivos conectados. Cuando la tensión vuelve a estar por debajo de Vmax, el sistema puede reconectarse automáticamente y retomar el estado normal de operación.


## Maquina de estado 
![Mauqina de estado](https://github.com/Dishi001/Control-de-proteccion-de-sobre-tension/blob/main/Imagenes/Maquina%20de%20estado.png)


## Circuito

Conectamos un potenciometro a la entrada del ADC del LPC845BRK y lo ajustamos de tal forma que la tension que reciba el micro no sea superior a 3.3V. Luego el rele que desconectaria el circuito ante un pico de sobretension iria conectado a los pines PIO1_0 y PIO1_1.

https://github.com/user-attachments/assets/d54a08fe-c066-419f-a5f8-f257e2e665c1

