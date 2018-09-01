#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdio_ext.h>

void ingresarNumero(float* numeroA)
{
    printf("Ingrese un numero ");
    //__fpurge(stdin); //para windows no funca xd
    scanf("%f",numeroA);

}


#endif // MATH_C_INCLUDED
