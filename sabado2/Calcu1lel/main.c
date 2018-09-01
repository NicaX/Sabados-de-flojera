#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#include "math.h"

int ingresarOpcion(void);

int main()
{
    float numeroA;
    float numeroB;
    float resultado;

    int opcion;
    do
    {

        printf("Bienvenido!!!\n");
        printf("1.Sumar\n");
        printf("2.Restar\n");
        printf("3.Multiplicar\n");
        printf("4.Dividir\n");
        printf("5.Factorizar\n");
        printf("6.Salir\n");

        opcion=ingresarOpcion();
        switch(opcion)
        {
        case 1:

        ingresarNumero(&numeroA)
            /*printf("Ingrese el numero A: ");
            scanf("%f", &numeroA);
            printf("Ingrese el numero B: ");
            scanf("%f", &numeroB);
            resultado=sumar(numeroA,numeroB);

            printf("La suma de los 2 numeros es: %f\n",resultado);*/
            break;
        case 2:
            printf("Estoy restando!!!\n");
            break;
        case 3:
            printf("Estoy multiplicando!!\n");
            break;
        case 4:
            printf("Estoy dividiendo!!!\n");
            break;
        default:
            printf("Ingrese una opcion valida\n");
            break;

        }
        system("pause"); //pausa la consola
        system("cls");  //limpia
    }
    while (opcion!=6);
    return 0;
}

int ingresarOpcion(void)
{
    int opcion;
    printf("Ingrese una opcion: ");
    scanf("%d",&opcion);

    return opcion;
}
