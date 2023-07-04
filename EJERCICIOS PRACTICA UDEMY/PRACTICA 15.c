/******************************************************************************
Desarrollar un programa que pida por teclado una cadena y un caracter y devuelva
si dicho caracter se encuentra en la cadena y si es asi, la posicion de la
primera aparicion del mismo.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char caracter;
    char cadena[50];
    printf("Introduce una cadena: ");
    gets(cadena);
    printf("Introduce un caracter: ");
    caracter = getchar();//getchar:lee el caracter que el usuario introdujo por teclado.
    int i = 0;
    int pos = -1;
    
    while(cadena[i] != '\0' && pos == -1){//'\0'=caracter nulo que muestra el final de la cadena.
        if(cadena[i] == caracter){//la [i]de la cadena es igual al caracter ingresado por el usuario
            pos = i;
        }
        i = i+1;//para pasar al siguiente caracter de la cadena
    }
    if(pos != -1){//significa que se encontro el caracter en la cadena.
        printf("El caracter %c se encuentra en la cadena %s y en la posicion %d ",caracter,cadena,pos);
    }

    return 0;
}
