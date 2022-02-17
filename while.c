#include <stdio.h>

// while -- Primero revisa la condición si es falsa nunca hace lo que tiene que hacer

int main()
{
    int opcion = 1;
    int numeroMes;

    while(/*Condición*/opcion == 1){
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
    }

    return 0;
}