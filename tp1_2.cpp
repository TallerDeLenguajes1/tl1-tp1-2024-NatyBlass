/*
a) Haga una función que devuelva el cuadrado de un número
b) Haga la función anterior, pero devolviendo un tipo void
c) Al recibir una variable muestre por pantalla la dirección y el contenido de
la variable
d) Dado dos parámetros de entrada, deberá invertir los valores entre
ambos.
void Invertir(a,b) //deberá devolver en el valor de a en la
variable b, y en el valor de b el valor de a
e) Dado dos parámetros de entrada, deberá devolverlos de forma
ordenada, en el primer parámetro el menor y en el segundo el mayor.
void orden(a,b) //deberá devolver en el valor de a el valor más
chico, y en el valor de b el valor más grande
f) Utilice las funciones anteriores para leer pares de valores e imprimirlos
por pantalla.
*/

#include <stdio.h>
#include <stdlib.h>

int cuadradoDeUnNum(int x);
void cuadDeUnNumV2(int *x);
void Invertir(int *a, int *b);
void ordenar(int *a, int *b);

main()
{

    int vble;

    printf("Ingrese un numero entero: ");
    scanf("%d", &vble);

    printf("Direccion de la variable: %d\n", &vble);
    printf("Contanido de la variable: %d\n", vble);

    printf("PRUEBA DE FUNCIONES\n");

    int x, *punt;
    punt = &x;

    printf("Ingrese un Numero para calcular su cuadrado:");
    scanf("%d", &x);
    printf("El cuadrado del numero %d es: %d\n", x, cuadradoDeUnNum(x));
    cuadDeUnNumV2(punt);
    printf("Utilizando la funcion void: el cuadrado del numero es: %d\n", *punt);

    int a, b, *puntA, *puntB;
    puntA = &a;
    puntB = &b;

    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &a, &b);

    Invertir(puntA, puntB);
    printf("Los valores invertidos son: a = %d | b = %d\n", a, b);

    printf("Ingrese nuevamente dos numeros enteros: ");
    scanf("%d %d", &a, &b);

    ordenar(puntA, puntB);
    printf("Los valores ordenados de menor a mayor son: %d, %d\n", a, b);

}

int cuadradoDeUnNum(int x)
{
    int xCuad;
    xCuad = x * x;
    return xCuad;
}

void cuadDeUnNumV2(int *x)
{
    *x = *x * *x;
}

void Invertir(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void ordenar(int *a, int *b)
{
    int aux;
    if (*a > *b)
    {
        aux = *a;
        *a = *b;
        *b = aux;
    }
    
}

