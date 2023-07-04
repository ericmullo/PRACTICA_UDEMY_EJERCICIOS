/******************************************************************************
Desarrolla un programa que solicite la carga de un numero al usuario. A
continuacion, debere pedir las notas de ese numero de alumnos, y mostrar por
pantalla el numero de alumnos aprobados y suspensos.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, contador_aprobados, contador_suspensos;
    float nota;
    printf("Introduzca el numero de alumnos: ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        printf("Introduzca la nota del alumno: ");
        scanf("%f",&nota);
        if(nota>=5){
            contador_aprobados++;
        }
        else{
            contador_suspensos++;
        }
    }
    printf("El numero de alumnos aprobados es %d y el numero de alumnos suspensos es %d",contador_aprobados,contador_suspensos);
    

    return 0;
}
