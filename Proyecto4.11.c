#include<stdio.h>
#include<stdlib.h>

int main()
{
    int anio=0,mes=0;
    printf("Ingrese el numero de anio: ");
    scanf("%d",&anio);
    printf("Ingrese el numero de mes: ");
    scanf("%d",&mes);

    switch(mes)
    {
        case 1:
            printf("El mes tiene 31 dias");
        break;
        case 2:
            if(anio%4==0 && anio%100!=0 || anio%400==0)
            {
                printf("El mes tiene 29 dias");
            }
            else
            {
                printf("El mes tiene 28 dias");

            }
        break;
        case 3:
            printf("El mes tiene 31 dias");
        break;
        case 4:
            printf("El mes tiene 30 dias");
        break;
        case 5:
            printf("El mes tiene 31 dias");
        break;
        case 6:
            printf("El mes tiene 30 dias");
        break;
        case 7:
            printf("El mes tiene 31 dias");
        break;
        case 8:
            printf("El mes tiene 31 dias");
        break;
        case 9:
            printf("El mes tiene 30 dias");
        break;
        case 10:
            printf("El mes tiene 31 dias");
        break;
        case 11:
            printf("El mes tiene 30 dias");
        break;
        case 12:
            printf("El mes tiene 31 dias");
        break;
        default:
            printf("inexistente");
    }

    return 0;
}
