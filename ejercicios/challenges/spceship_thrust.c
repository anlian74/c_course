#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    NONE,
    LOW = 5,
    MEDIUM = 9,
    HIGH = 12,
    MAXIMUM =20
} SpaceshipThrust;

int main ()
{
    SpaceshipThrust thrust;

    printf("\n========== * ==========\n\n");

    thrust = NONE;
    printf("Spaceship is ready to go, now thrust is: %d\n", thrust);

    thrust = MAXIMUM;
    printf("Spaceship is taking off, now thrust is: %d\n", thrust);

    thrust = MEDIUM;
    printf("Spaceship is entering into the ionosphere, now thrust is: %d\n", thrust);

    thrust = LOW;
    printf("Spaceship is ravelling to deep space, now thrust is: %d\n", thrust);
    printf("Bye bye spaceship!\n");

    printf("\n========== * ==========\n\n");
    return EXIT_SUCCESS;
}