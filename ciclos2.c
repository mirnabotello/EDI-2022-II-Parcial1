#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX 100

//  Generar un número aleatorio entre 0 y 100
//  Lo vamos a mostrar en pantalla
//  Y lo vamos a sumar
//  Vamos a seguir generando números hasta que la suma sea mayor a 500
//                                   mientras la suma sea menor o igual que 500

int main()
{
    int aleatorio;
    int suma = 0;

    srand(getpid());  // Semilla a la funcion aleatoria

    for (; suma <= 500;) {
        aleatorio = rand() % (MAX + 1);
        printf("%d\n", aleatorio);
        suma = suma + aleatorio;
        printf("Suma: %d\n", suma);
    }

    return 0;
}