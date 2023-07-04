/******************************************************************************
• Escribir un programa que se utilice para calcular el precio final de venta de 
coches de segunda mano de un concesionario. Para ello, el programa debe pedir al
usuario que introduzca el precio base del vehículo, el número de kilómetros y su consumo.
• Si los kilómetros son inferiores a 20000 y su consumo igual o inferior a 5, 
incrementar el precio base un 20%.
• Si los kilómetros son superiores a 20000 y su consumo igual o inferior a 5, 
incrementar el precio base un 10%.
• Si el consumo es superior a 5, incrementar el precio base
un 5%.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int base_vehiculo;
    int kilometros;
    float consumo,precio_final;
    
    printf("Introduzca el precio base del vehiculo: ");
    scanf("%d",&base_vehiculo);
    printf("Introduzca los kilometros del vehiculo: ");
    scanf("%d",&kilometros);
    printf("Introduzca el consumo del vehiculo: ");
    scanf("%f",&consumo);
    
    if(kilometros<20000 && consumo<=5){
        precio_final=base_vehiculo*1.2;
        
    }
    else if(kilometros>20000 && consumo>=5){
        precio_final=base_vehiculo*1.1;
    }
    else if(consumo>5){
        precio_final=base_vehiculo*1.05;
    }
    printf("El precio final del vehiculo es %.2f ",precio_final);
    

    return 0;
}
