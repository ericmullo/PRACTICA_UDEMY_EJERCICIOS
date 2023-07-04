/******************************************************************************
Desarrolle un programa que solicite constantemente la carga de un numero
al usuario. El programa finalizara cuando el usuario introduzca 0, momento
en el que se debere visualizar la suma y el promedio de todos los numeros introducidos.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int suma=0, contador=0, numero=-1;
    
    while(numero !=0){
        printf("Introuce el numero: ");
        scanf("%d",&numero);
        contador++;//cantidad de numeros que voy introduciendo
        suma += numero;//lo que hay en suma le sumo suma
    }
    float promedio = suma/contador;
    printf("La suma de los numeros es %d y el promedio de esos numeros es %.2f",suma,promedio);
    
    

    return 0;
}
