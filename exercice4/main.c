#include <stdio.h>

int
main ()
{

    char voyelles[12] = "AaEeIiOoUuYy";

    char tab[12] = { 'a', 'A', 'e', 'E', 'I', 'O', 'U', 'Y', 'Y', 'Y' };

    printf ("%s\n", voyelles);

    printf ("%c\n", voyelles[0]);

    printf ("%c\n", tab[0]);

    printf ("%s\n", tab);

    return 0;
}
