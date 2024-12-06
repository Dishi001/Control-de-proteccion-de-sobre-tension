# Control de proteccion de sobre tension

## Memoria descriptiva
El proyecto es un control de protección de sobretensión con un valor de tensión máxima (Vmax) configurable. El objetivo es proteger un sistema eléctrico desconectándolo automáticamente cuando la tensión excede el valor máximo configurado. La tensión del sistema es monitoreada de forma continua a través de un sensor de voltaje. De momento, simularemos su funcionamiento en Proteus o otro simulador.

El sistema comienza en un estado normal de funcionamiento mientras la tensión medida (V) se mantenga por debajo de la tensión máxima configurada (Vmax). Si la tensión excede el valor máximo, el sistema activa un estado de desconexión para proteger los dispositivos conectados. Cuando la tensión vuelve a estar por debajo de Vmax, el sistema puede reconectarse automáticamente y retomar el estado normal de operación.


## Maquina de estado 
![Mauqina de estado](https://github.com/Dishi001/Control-de-proteccion-de-sobre-tension/blob/main/Imagenes/Maquina%20de%20estado.png)
