/******************************************************************************
Se desea realizar un programa que almacene la información de un motor de combustión
interna y posteriormente muestre la cilindrada de dicho motor en CV. La información del motor
se almacenará en una estructura con los siguientes miembros y tipos de datos:
• Identificador del motor: valor numérico que identifica el motor de forma única
• Cilindro: estructura de datos anidada
• Número de cilindros: número entero que indica el número de cilindros del motor
• cilindrada: número real que se calculará en el programa
A su vez, cilindro será una estructura anidada que conste de los siguientes miembros:
• Diámetro: número real (en milimetros)
• Carrera: número real (en milímetros)
La información del cilindro se almacenará en milímetros. El programa pedirá los datos del
motor al usuario y calculará la cilindrada, que almacenará en la misma estructura de datos,
según la siguiente fórmula:
v. = N+ C + П1 . D2
4
Donde N representa el número de cilindros, C representa la carrera del cilindro (en centimetros), D el diámetro del cilindro (en centímetros) y il tiene su valor definido en la librería math.h como M_PI. ¡CUIDADO CON LAS UNIDADES DE MEDIDA!
Finalmente, se mostrarán todos los datos introducidos por el usuario y la cilindrada del motor.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    struct cilindro{
        float diametro;
        float carrera;
    };

    struct motor{
        int identificador;
        struct cilindro cilindro1;
        int num_cilindros;
        float cilindrada;

    };

    struct motor motor1;
    printf("Introduce el identificador\n ");
    scanf("%d",&motor1.identificador);
    printf("Introduce el diametro del cilindro\n ");
    scanf("%f",&motor1.cilindro1.diametro);
    printf("Introduce la carrera del cilindro\n ");
    scanf("%f",&motor1.cilindro1.carrera);
    printf("Introduce el numero de cilindros\n ");
    scanf("%d",&motor1.num_cilindros);

    motor1.cilindrada = (motor1.num_cilindros*(motor1.cilindro1.carrera/10)*M_PI*pow((motor1.cilindro1.diametro/10),2))/4;
    printf("identificador: %d\n",motor1.identificador);
    printf("diametro: %.2f\n",motor1.cilindro1.diametro);
    printf("Carrera: %.2f\n",motor1.cilindro1.carrera);
    printf("N° cilindros: %d\n",motor1.num_cilindros);
    printf("Cilindrada: %.2f\n",motor1.cilindrada);



    return 0;
}


