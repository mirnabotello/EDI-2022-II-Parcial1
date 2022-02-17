#include <stdio.h>

int main()
{
    // Operadores condicionales
    // VERDADERO o FALSO
    // > < == >= <= !=
    // && (AND) || (OR)

    float promedio = 6.5;

    //  Instrucciones de control]
    // if
    if(promedio >= 6) {
        printf("El alumno está aprobado en ordinario");
        //calcular algo
    }
    else if(promedio >= 5 && promedio < 6)
        printf("El alumno debe presentar extraordinario");
    else if(promedio >= 3 && promedio < 5)
        printf("Otra cosa");
    else
        printf("El alumno está reprobado");

    return 0;
}