#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

// Aca llamo a la biblioteca que contiene las funciones

int main()
{
    int valor1 = 0;
    int valor2 = 0;
    int opcion;
    int sumar;
    int restar;
    int multiplicar;
    float dividir;
    int factorializarA;
    int factorializarB;

    char seguir;
        // Aca Se solicitan los valores al usuario y se le abre el menu de opciones
        do{
        system("cls");

        printf("1. Ingrese el 1er operando: (A = %d) \n", valor1);
        printf("2. Ingresar 2do operando (B = %d) \n", valor2);
        printf("3. Calcular todas las operaciones\n");
        printf("    a) Calcular la suma (A + B)\n");
        printf("    b) Calcular la resta (A - B)\n");
        printf("    c) Calcular la division (A / B)\n");
        printf("    d) Calcular la multiplicacion (A * B)\n");
        printf("    e) Calcular el factorial (A!)\n");
        printf("4.  Informar resultados\n");
        printf("    a) El resultado de A + B es: r \n");
        printf("    b) El resultado de A - B es: r \n");
        printf("    c) El resultado de A / B es: r \n");
        printf("    d) El resultado de A * B es: r \n");
        printf("    e) El factorial de A es: r y El factorial de B es: r \n");
        printf("5. Salir\n");

        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        // Aca se abre un menú con una estructura que contiene diferentes opciones a elegir

        switch(opcion)
        {
        case 1:
            printf("Ingrese el 1er valor: \n");
        scanf("%d", &valor1);
        system("pause");
        break;

        case 2:
            printf("Ingrese el 2do valor: \n");
        scanf("%d", &valor2);
        system("pause");
        break;

        case 3:

            sumar = suma(valor1, valor2);

            restar = resta(valor1, valor2);

            if(valor2 != 0)
            {
                dividir = division(valor1, valor2);
            }
            else
                {
                 dividir = 0;
                 printf("Error. No se puede dividir por 0 \n");
                }

            multiplicar = multiplicacion(valor1, valor2);

            factorializarA = factorial(valor1);

            factorializarB = factorial(valor2);

            printf("Operacion realizadas: \n");
            system("pause");

            break;

        case 4:
            printf("4.  Informar resultados\n");
            printf("    a) El resultado de %d + %d es: %d \n",valor1, valor2, sumar);
            printf("    b) El resultado de %d - %d es: %d \n", valor1, valor2, restar);
            printf("    c) El resultado de %d / %d es: %.2f \n", valor1, valor2, dividir);
            printf("    d) El resultado de %d * %d es: %d \n", valor1, valor2, multiplicar);
            printf("    e) Los factoriales de %d es: %d y El factorial de %d es: %d \n", valor1, factorializarA, valor2, factorializarB);
            system("pause");
        break;

        case 5:
            printf("Desea seguir ingresando datos? Oprima s para seguir");
            fflush(stdin);
            scanf("%c", &seguir);
            system("pause");
            break;

        default:
            printf("Error. Ingrese una opciones valida");
            system("pause");


        }
        system("pause");
        }while(seguir != 's');



        return 0;

}
