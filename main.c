#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    int i=0;
    float acum=0;
    float promedio;
    int continuar=1;
    /*printf("Ingrese su edad: ");
    scanf("%d",&edad);
    printf("su esdad es: %d", edad);*/

    /*for(i=0;i<3;i++)
    {

        printf("Ingrese su edad: ");
        scanf("%d", &edad);
        printf("Su edad es: %d \n", edad);
        acum+=edad;

    }
    promedio=acum/i;
    printf("la edad promedio es: %d",promedio);
    */
    /*while(i<3)
    //  in continuar= 1;
    //  while (continuar)
    {
        //le agregue valor 0 al i al principio para que funcione
        printf("Ingrese su edad: ");
        scanf("%d", &edad);
        printf("Su edad es: %d \n", edad);
        acum+=edad;
        i++;

    }
    promedio=acum/i;
    printf("la edad promedio es: %d",promedio);*/
    do
    {
        printf("Ingrese su edad: ");
        scanf("%d", &edad);
        printf("Su edad es: %d \n", edad);
        acum+=edad;
        i++;
        printf("desea continuar? (1/0)");
        scanf("%d",&continuar);  //no lo guardamos, la pedimos
    }while(continuar);

    promedio=acum/i;
    printf("la edad promedio es: %f",promedio);

    return 0;
}
LOS CAMBIOS SON BUENOS
