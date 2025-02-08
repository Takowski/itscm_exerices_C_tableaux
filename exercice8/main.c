#include <stdio.h>

int
main ()
{

    int nombre[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i <= 4; i++)
        {
            nombre[i] = i * i;
        }

    for (int i = 0; i <= 4; i++)
        {
            printf ("nombre[%d] = %d\n", i, nombre[i]);
        }

    return 0;
}
