#include <stdio.h>
#include <stdlib.h>
/**
 * === Sphere ===
 *
 * Calculate surface and volume of a sphere
 *
 * Goals:
 *  - prompt user to enter the radius
 *  - calculate the surface area
 *  - calculate the enclosed volume
 *  - print the radius and the results in decimal format (2 digit of precision)
 *  - print the radius and the results in scientific notation (3 digits of precision)
 *  - check the results
 */

int main ()
{
    const double PI = 3.141516;
    double radius;

    printf("\n========== * ==========\n\n");

    printf("Introduzca el radio de la esfera:\n");
    scanf("%lf", &radius);
    printf("\n");

    double surface = 4.0 * PI * radius * radius;
    double volume = 4.0 / 3 * PI * radius *radius * radius;

    printf("Notación decimal:\n");
    printf("radio: %.2f\n", radius);
    printf("Superficie: %.2f\n", surface);
    printf("Volumen: %.2f\n", volume);
    printf("\n");

    printf("Notación científica:\n");
    printf("radio: %.3e\n", radius);
    printf("Superficie: %.3e\n", surface);
    printf("Volumen: %.3e\n", volume);


    printf("\n========== * ==========\n\n");
    return EXIT_SUCCESS;
}