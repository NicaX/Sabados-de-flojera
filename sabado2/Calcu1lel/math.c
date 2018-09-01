#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdio_ext.h>
/*funcionalidad: funcion encargada de pedir un num y almacenarlo
parametros: recibe una direccion de memoria
retorno:
*/
void ingresarNumero(float* pNumero)
{
    printf("Ingrese un numero ");
    //__fpurge(stdin); //para windows no funca xd
    fflush(stdin);
    scanf("%f",pNumero);

}


#endif // MATH_C_INCLUDED
