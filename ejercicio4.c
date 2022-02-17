#include <stdio.h>

// Usuario número 1-12
// Salida imprimir a que mes corresponde
// Si el número es menor a 1 o mayor a 12 debemos decirle que no es un número válido
//  1 -> Enero
//  2 -> Febrero

//  1.  Que datos necesito -> número
//  2.  Procesamiento


//  12, 1, 2 -> Invierno
//  3, 4, 5  -> Primavera
//  6, 7, 8 -> Verano
//  9, 10, 11 -> Otoño
int main()
{
    int numeroMes;

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

    printf("\nAhora con switch\n");

    switch(numeroMes)
    {
        case 12:
        case 1:
        case 2:
            printf("Invierno");
            break;
        case 3:
        case 4:
        case 5:
            printf("Primavera");
            break;
        case 6:
        case 7:
        case 8:
            printf("Verano");
            break;
        case 9:
        case 10:
        case 11:
            printf("Otoño");
            break;
        default:
            printf("El valor no es válido");
    }

    return 0;
}