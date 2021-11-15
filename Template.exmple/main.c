#include <stdio.h>
#include <stdlib.h>

int main()
{
    int apples = 12;
    int bananas = 9;
    int students = apples + bananas;

    printf("In the classroom, there are:\n ");
    printf("\t%d apples\n", apples);
    printf("\t%d bananas\n", bananas);
    printf("giving a total od %d students.\n", students);

    return EXIT_SUCCESS;
}
