#include <stdio.h>

// for - Lleva inicialización, condición e incremento/decremento
//     - Cuando sabemos cuantas vueltas va a dar

int main() {

    int vuelta;
    int numeroVueltasTotales;

    printf("Cuantas vueltas quieres: ");
    scanf("%d", &numeroVueltasTotales);

    for(/*inicialización*/vuelta = 1;/*condición*/vuelta <= numeroVueltasTotales;/*incremento/decremento*/ vuelta = vuelta + 1)
    {
        printf("%d\n", vuelta);
    }

    return 0;
}

