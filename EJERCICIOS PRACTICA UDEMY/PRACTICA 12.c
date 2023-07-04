/******************************************************************************
Escribir un programa que dado un vector de 10 elementos, muestre el valor
maximo y minimo.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vector[10]={4,7,9,75,-5,6,12,-18,0,1};
    int maximo = vector[0];
    int minimo = vector[0];
    
    for(int i=1; i<10;i++){
        if(vector[i]>maximo){
            maximo = vector[i];
        }
        if(vector[i]<minimo){
            minimo = vector[i];
        }
    }
    
    printf("El maximo de los valores es: %d\nEl menor de los valores es: %d",maximo,minimo);
    

    

    return 0;
}



