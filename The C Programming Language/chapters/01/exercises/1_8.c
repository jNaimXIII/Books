#include <stdio.h>

/* count blanks, tabs and newlines in input */
main()
{
    int c, bl, tb, nl;

    bl = tb = nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++bl;
        if (c == '\t')
            ++tb;
        if (c == '\n')
            ++nl;
    }
    printf("%3d blanks\n", bl);
    printf("%3d tabs\n", tb);
    printf("%3d newlines\n", nl);
}
