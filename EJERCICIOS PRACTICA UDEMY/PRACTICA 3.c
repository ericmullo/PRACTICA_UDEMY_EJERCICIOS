/******************************************************************************

Escriba un programa que pida al usuario el valor de la base y la altura de un rectangulo
y con ellos calcule su area A=b*h

*******************************************************************************/
#include <stdio.h>

int main()
{
    float base,altura;//float=variable tipo flotante para imprimir con decimales.
    float resultado;
    printf("Ingrese la base del triangulo: ");
    scanf("%f",&base);
    printf("Ingrese la altura del triangulo: ");
    scanf("%f",&altura);
    
    resultado=base*altura;
    printf("El area del triangulo de base %.2f y de altura %.2f es: %.2f",base,altura,resultado);
    
    

    return 0;
}
