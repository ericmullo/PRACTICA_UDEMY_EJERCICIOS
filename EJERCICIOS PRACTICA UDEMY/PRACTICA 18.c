/******************************************************************************
Se desea realizar un programa que permita controlar la entrada de los asistentes a un museo.
Para ello el programa irá solicitando, por cada grupo de asistentes, información de la hora de acceso, el número de personas que forman el grupo y las edades de cada una de ellas. Una vez introducida la información, el programa mostrará el precio total de la entrada grupal.
La información de la entrada se almacenará en una estructura de datos formada por los
siguientes miembros:
• Hora de entrada
• Número de asistentes
• Precio total
A su vez, la hora de entrada será una estructura anidada donde se almacenará la siguiente
información:
• Hora

• Minuto

*******************************************************************************/
#include <stdio.h>

int main()
{
    struct hora_entrada{
        int hora;
        int minuto;
    };
    struct entrada{
        struct hora_entrada hora1;
        int asistentes;
        float precio;
    };
    
    struct entrada e1;
    char continuar = 's';
    while(continuar == 's'){
        printf("Introduce la hora de entrada\n ");
        scanf("%d",&e1.hora1.hora);
        printf("Introduce el minuto de entrada\n");
        scanf("%d",&e1.hora1.minuto);
        printf("Introduce el numero de asistentes\n");
        scanf("%d",&e1.asistentes);
        
        int total = 0;
        for(int i=0;i<e1.asistentes;i++){
            int edad;
            printf("Introduce la edad del asistente %d\n",(i+1));
            scanf("%d",&edad);
            if(edad <6){
                edad + 0;
                
            }
            else if(edad >=6 && edad <=15){
                total = total + 5;
            }
            else if(edad >=16 && edad<=26 || edad >65){
                total = total + 8;
            }
            else{
                total = total + 10;
            }
        }
        if(e1.asistentes >=5){
            e1.precio = total - total*0,1;
        }
        else{
            e1.precio = total;
        }
        printf("Hora de entrada del grupo %d\n",e1.hora1.hora);
        printf("Minuto de entrada %d\n",e1.hora1.minuto);
        printf("Precio de las entradas del grupo %f\n",e1.precio);
        printf("Quiere continuar otro grupo(s/n)\n");
        scanf("%c",&continuar);
        while(continuar == '\n'){
            scanf("%c",&continuar);
            
        }
        
    }
    printf("Hasta la proxima...\n");
    

    

    return 0;
}


