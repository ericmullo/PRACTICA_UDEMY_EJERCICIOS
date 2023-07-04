/******************************************************************************

Escribe un programa que pida al usuario su nota y compruebe si ha suspendido
(<5), si ha sacado un suficiente(5), un bien(6), un notable (7-8) o un
sobresaliente(9-10).


*******************************************************************************/
#include <stdio.h>

int main()
{
    int nota;
    printf("Introduzca la nota del alumno: ");
    scanf("%d",&nota);
    if(nota<5){
        printf("Suspension");
    }
    else if(nota==6){
        printf("Bien");
    }
    else if(nota==7||nota==8){
        printf("Notable");
    }
    else if(nota==9||nota==10){
        printf("Sobresaliente");
    }

    return 0;
}
