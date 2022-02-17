#include <stdio.h>
#include <stdlib.h>

//  Pedir dos números al usuario
//  Vamos a imprimir los números pares que se encuentren entre esos dos números
//  Ejemplo:
//      inferior = 10
//      superior = 25
//   Los numeros pares entre 10 y 25 son:  10, 12, 14, 16, 18, 20, 22, 24
//
//  10 -> si
//  11 -> no
//  12 -> si
//   ....
//  25 -> no
//  26  --->  Este valor ya no lo reviso porque se pasa del número superior

int main()
{
    int inferior, superior;
    int numero;

    printf("Dame el limite inferior: ");
    scanf("%d", &inferior);

    printf("Dame el limite superior: ");
    scanf("%d", &superior);

    if(superior < inferior)
    {
        printf("Los valores están volteados\n");
        printf("Los valores serán intercambiad\n");

        numero = inferior;
        inferior = superior;
        superior = numero;
    }

    numero = inferior;

    printf("\nResultado con while: ");

    while(numero >= inferior && numero <= superior)
    {
        if(numero % 2 == 0)   // Sé que el número es par
            printf("%d, ", numero);

        numero++;
    }

    printf("\nResultado con do-while: ");

    numero = inferior;

    do{
        if(numero % 2 == 0)   // Sé que el número es par
            printf("%d, ", numero);
        numero++;

    }while(numero >= inferior && numero <= superior);

    printf("\nResultado con for: ");

    for(numero = inferior; numero >= inferior && numero <= superior; numero++)
    {
        if(numero % 2 == 0)   // Sé que el número es par
            printf("%d, ", numero);
    }

    return 0;
}