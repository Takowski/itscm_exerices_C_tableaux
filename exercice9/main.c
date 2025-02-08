#include <stdio.h>

int
main ()
{

    int suite[8];
    suite[0] = 1;
    suite[1] = 2;

    for (int i = 2; i < 8; i++)
        {
            suite[i] = suite[i - 2] + suite[i - 2];
        }

    for (int i = 0; i < 8; i++)
        {
            printf ("%d\n", suite[i]);
        }

    return 0;
}
