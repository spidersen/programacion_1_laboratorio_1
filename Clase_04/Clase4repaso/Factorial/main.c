#include <stdio.h>
#include <stdlib.h>

int factorial (int);

int main()

{
  int numero = 5;
  int factorial = 1;


return 0;
}

int factorial(int numero)
{
    int retorno;

    if(numero==0)
    {
        retorno = 1;
    }
    else
    {
        retorno = numero * factorial(numero - 1);
        printf("El factorial es: %d", &factorial);
        scanf("%d", &factorial);
    }
    return retorno;
}

