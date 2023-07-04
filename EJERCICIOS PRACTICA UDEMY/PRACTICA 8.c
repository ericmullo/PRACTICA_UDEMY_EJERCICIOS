/******************************************************************************
Escribir un programa que muestre por pantalla todos los multiplos de 3
entre 1 y 100.

*******************************************************************************/
#include <stdio.h>

int main()
{
    for(int i=1; i<=100; i++){//el bucle se va a repetir 100 veces
        if(i%3==0){
          printf("%d\n",i);  
            
        }
        
    }
   

    return 0;
}
