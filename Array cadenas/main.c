#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*char nombre[5] = {"Juan"};
    int cantidad;
    int cantidad = strlen(nombre);
    //strcpy(nombre2, nombre);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(nombre);
    //fgets(nombre, 5, stdin);
    //strlen(nombre);


    //printf("Nombre vale %s\n", nombre);
    printf("Nombre vale %s\n", cantidad);
        */

        char nombre[50];
 printf("Ingrese nombre: ");

 scanf("%s ", nombre);

for(int i= 0; nombre[i]!= '\0'; i++)
{
    printf("la cadena vale: %d\n", i);
}
    return 0;
}
