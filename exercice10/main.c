#include <stdio.h>

int
main ()
{
    int c[6] = { 0 };
    int nombres[6] = { 2, 5, 3, 10, 4, 2 };
    int i;

    for (i = 0; i < 6; i++)
        {
            printf ("saisisez le nombre %d:\n", nombres[i]);
            scanf ("%d", &c[i]);
        }
    for (i = 0; i < 6; i++)
        {
            c[i] *= c[i];
        }
    for (i = 0; i < 3; i++)
        {
            printf ("valeur de la postion%d: %d\n", i, c[i]);
        }

    for (i = 3; i < 6; i++)
        {
            printf ("valeur de la postion%d fois 2 : %d\n", i, 2 * c[i]);
        }

    return 0;
}
