#include <stdio.h>

// do-while - Se ejecuta al menos una vez

int main()
{
    // do - while
    int opcion;
    int numeroMes;

    do{
        printf("Dame un número del 1 al 12: ");
        scanf("%d", &numeroMes);

        if(numeroMes >= 3 && numeroMes <= 5)
            printf("Primavera");
        else if(numeroMes >= 6 && numeroMes <= 8)
            printf("Verano");
        else if(numeroMes >= 9 && numeroMes <= 11)
            printf("Otoño");
        else if(numeroMes == 12 || numeroMes >= 1 && numeroMes <= 2)
            printf("Invierno");
        else
            printf("El valor no es válido");

        printf("\n Deseas continuar? (1-SI, 2-NO): ");
        scanf("%d", &opcion);

    }while(opcion == 1);

    return 0;
}