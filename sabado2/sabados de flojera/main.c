#include <stdio.h>
#include <stdlib.h>

float division(float numero1, float numero2, float* resultado);
int main()
{
   int error;
   float resultado, num1=10, num2 =1.5;

   error=division (num1, num2, &resultado);
   if (!error==0) //
   {
       printf("Division exitosa: %2.f",resultado);
   }else
   {
       printf("No se puede dividir por 0");
   }

   return 0;
}
float division(float  numero1, float numero2, float* resultado)
{
    int retorno = -1;
    if(numero2 !=0)
    {
        *resultado=numero1/numero2;
        retorno =0;
    }

    return retorno;
}
