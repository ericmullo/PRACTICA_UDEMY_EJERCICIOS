/******************************************************************************
Cargar por teclado y almacenar un vector el peso de 5 personas.Obtener el
promedio de los mismos contar cuantas personas pesan mas que el promedio
y cuales pesan menos

*******************************************************************************/
#include <stdio.h>

int main()
{
    float pesos[5];
    float suma = 0;
    
    for(int i=0; i<5;i++){
        printf("Introduce el numero para almacenarlo: ");
        scanf("%f",&pesos[i]);
        suma = suma + pesos[i];
        
        
        
    }
    
    int mayor_peso;
    int menor_peso;
    float promedio = suma/5;
    
    for(int i=0; i<5;i++){
        if(pesos[i]>=promedio){
            mayor_peso++;

        }
        else{
            menor_peso++;
        }
    }
    
    printf("El promedio de los pesos es: %.2f\n",promedio);
    printf("Los pesos mayores que el promedio es %d y los pesos menores que el promedio es %d",mayor_peso,menor_peso);
    
    
    
    

    return 0;
}


