#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Funciones.h"


int main()
{
    int numero;
    int edad;
    int nota;
    int legajo;


    edad = pedirEntero("Ingrese edad: ", 18, 60);
    legajo = pedirEntero("Ingrese legajo: ", 1, 1500);
    nota = pedirEntero("Ingrese nota: ", 1, 10);

    return 0;
}



