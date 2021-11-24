#include <stdio.h>
#include <stdlib.h>

int main ()
{

    printf("\n========== * ==========\n\n");
    /* Enteros
    int a, b, c;
    printf("Introduzca el operando A (int): ");
    scanf("%d", &a);

    printf("Introduzca el operando B (int): ");
    scanf("%d", &b);

    printf("\n");

    c = a + b;
    printf("c = a + b --> %d\n", c);
    c = a -  b;
    printf("c = a - b --> %d\n", c);
    c = a * b;
    printf("c = a * b --> %d\n", c);
    c = a / b;
    printf("c = a / b --> %d\n", c);
    c = a % b;
    printf("c = a %% b --> %d\n", c);
    */

    float a, b, c;
    printf("Introduzca el operando A (int): ");
    scanf("%f", &a);

    printf("Introduzca el operando B (int): ");
    scanf("%f", &b);

    printf("\n");

    c = a + b;
    printf("c = a + b --> %9.3f\n", c);
    c = a -  b;
    printf("c = a - b --> %9.3f\n", c);
    c = a * b;
    printf("c = a * b --> %9.3f\n", c);
    c = a / b;
    printf("c = a / b --> %9.3f\n", c);

    printf("\n========== * ==========\n\n");
    return EXIT_SUCCESS;
}