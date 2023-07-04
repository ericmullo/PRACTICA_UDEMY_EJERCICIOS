/******************************************************************************

Escribe un programa que realize la conversion euros a pesetas.Para ello, 
pedira al usuario que introduzca los euros a convertir y mostrara por consola
la equivalencia en pesetas de dicha cantidad.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float euros;
    printf("Introduce el valor de euros que deseas convertir\n");
    scanf("%f",&euros);
    //pesetas=euros*166,386
    
    printf("%.2f euros equivalen a %.2f pesetas",euros,euros*166,386);
    

    return 0;
}
