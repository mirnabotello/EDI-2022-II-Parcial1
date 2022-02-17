//Prueba
#include<stdio.h>

// Repartir una cantidad de dinero, en el menor número de billetes
//   1000, 500, 200, 100, 50, 20, 10, 5, 2, 1
//   $10793

//  10 -> 1000  Restan 793
//   1 -> 500   Restan 293
//   1 -> 200   Restan 93
//   0 -> 100   Restan 93
//   1 -> 50    Restan 43
//   2 -> 20    Restan 3
//   0 -> 10
//   0 -> 5
//   1 -> 2     Restan 1
//   1 -> 1


//  1. Pedirle la cantidad al usuario
//  2. Las denominaciones de los billetes

int main()
{
    int cantidad;
    int billete1000, billete500, billete200, billete100, billete50, billete20;
    int moneda10, moneda5, moneda2, moneda1;

    printf("Dame la cantidad de dinero: ");
    scanf("%d", &cantidad);

    billete1000 = cantidad / 1000;
    cantidad = cantidad % 1000;

    billete500 = cantidad / 500;
    cantidad = cantidad % 500;

    billete200 = cantidad / 200;
    cantidad = cantidad % 200;

    billete100 = cantidad / 100;
    cantidad = cantidad % 100;

    billete50 = cantidad / 50;
    cantidad = cantidad % 50;

    billete20 = cantidad / 20;
    cantidad = cantidad % 20;

    moneda10 = cantidad / 10;
    cantidad = cantidad % 10;

    moneda5 = cantidad / 5;
    cantidad %= 5;

    moneda2 = cantidad / 2;
    cantidad %= 2;

    moneda1 = cantidad;

    printf("Billetes de 1000: %d\n", billete1000);
    printf("Billetes de 500: %d\n", billete500);
    printf("Billetes de 200: %d\n", billete200);
    printf("Billetes de 100: %d\n", billete100);
    printf("Billetes de 50: %d\n", billete50);
    printf("Billetes de 20: %d\n", billete20);
    printf("Monedas de 10: %d\n", moneda10);
    printf("Monedas de 5: %d\n", moneda5);
    printf("Monedas de 2: %d\n", moneda2);
    printf("Monedas de 1: %d\n", moneda1);

    return 0;
}
