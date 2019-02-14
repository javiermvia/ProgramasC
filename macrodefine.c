#include <stdio.h>
#define CINCO 3+2
int main()
{ /* Inicio de programa */

    printf("define: %d \n", 3*CINCO);
    /* Define sustituye el texto , 3+2, de la macro CINCO en el resto del programa */
    printf("constante: %d \n", 3*CINCO);
    /* Constante es un dato que se guarda como tal en el código del programa */
    printf("constante: %d \n", 3*CINCO);
    /* Cadenas alfanuméricas */
    printf("\x41\n");
    printf("\x4A\n");

    return 0;
} /* Cierre de programa */
