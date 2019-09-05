#include "Operaciones.h"

/*Aca está el desarrollo de cada función, llamando así a la biblioteca que abarcan todas las funciones declaradas*/

int suma(int num1, int num2)               // 1) SUMA
    {
        int respuesta;
        respuesta = num1 + num2;
        return respuesta;

    }

    int resta(int num1, int num2)               // 2) RESTA
    {
        int respuesta;
        respuesta = num1 - num2;
        return respuesta;

    }

    int multiplicacion(int num1, int num2)      // 3) MULTIPLICACION
    {
        int respuesta;
        respuesta = num1 * num2;
        return respuesta;
    }

    float division(int num1, int num2)            // 4) DIVISION
    {
        float respuesta;
        respuesta =(float)num1 / num2;
        return respuesta;
    }


    int factorial(int num1)                        // 5) FACTORIAL
    {
        int respuesta;
        if(num1 == 0 || num1 < 0)
            return 1;
        respuesta = num1 * factorial(num1 - 1);
        return (respuesta);


    }
