#include <stdio.h>

void imprimePares(int inferior, int superior);  // Prototipo de funcion

int main()
{
    int inferior, superior;  // Ambito -> El espacio en donde viven las variables

    printf("Dame el limite inferior: ");
    scanf("%d", &inferior);

    printf("Dame el limite superior: ");
    scanf("%d", &superior);

    imprimePares(inferior, superior);  // Llamada a la función -> parámetros reales

    return 0;
}

void imprimePares(int inferior, int superior) // Parámetros formales
{
    int numero = inferior;

    while(numero >= inferior && numero <= superior)
    {
        if(numero % 2 == 0)   // Sé que el número es par
            printf("%d, ", numero);

        numero++;
    }
}