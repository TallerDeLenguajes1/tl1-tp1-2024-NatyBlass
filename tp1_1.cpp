#include <stdio.h>


main()
{
    printf("Hola Mundo\n");
    
    int x = 1;
    int * punt;
    punt = &x;

    printf("Direccion de memoria del puntero: %d\n", &punt);
    printf("Contenido de lo que apunta el puntero: %d\n", *punt);
    printf("Direccion a la que apunta el puntero: %d\n", punt);
    printf("Tamaño de memoria utilizado por la variable X: %d bytes\n", sizeof(x));
}