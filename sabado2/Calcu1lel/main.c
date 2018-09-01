#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"

void ingresarNumero(float* pNumero);
int ingresarOpcion(void);

int main()
{
    float numeroA;
    float numeroB;
    int flagA=0;
    int flagB=0;
    int opcion;
    do
    {

        printf("Bienvenido!!!\n");
        if(flagA==1)
        {
        printf("1.Ingrese numero (A=%.2f)\n",numeroA);
        }else
        {
        printf("1.Ingrese numero (A=x)\n");
        }
        if(flagB==1)
        {
        printf("1.Ingrese numero (B=%f)\n",numeroB);
        }else{
        printf("2.Ingrese numero (B=x)\n");
        }
        printf("3.Multiplicar\n");
        printf("4.Dividir\n");
        printf("5.Factorizar\n");
        printf("6.Salir\n");

        opcion=ingresarOpcion();
        switch(opcion)
        {
        case 1:
        flagA=1;
        ingresarNumero(&numeroA);
            /*printf("Ingrese el numero A: ");
            scanf("%f", &numeroA);
            printf("Ingrese el numero B: ");
            scanf("%f", &numeroB);
            resultado=sumar(numeroA,numeroB);

            printf("La suma de los 2 numeros es: %f\n",resultado);*/
            break;
        case 2:
            flagB=1;
            ingresarNumero(&numeroB);
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
void ingresarNumero(float* pNumero)
{
    printf("Ingrese un numero ");
    //__fpurge(stdin); //para windows no funca xd
    fflush(stdin);
    scanf("%f",pNumero);

}
