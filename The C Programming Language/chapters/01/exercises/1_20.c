#include <stdio.h>

#define TABSTOP 2

main()
{
    int c, i;

    while ((c = getchar()) != EOF)
        if (c != '\t') putchar(c);
        else
            for (i = 1; i <= TABSTOP; ++i) putchar(' ');
}
