#include <stdio.h>

#define TABSTOP 2

main()
{
    int c, i, spaces;

    spaces = 0;
    while ((c = getchar()) != EOF)
        if (c != ' ') {
            if (spaces > 0) {
                for (i = 1; i <= spaces; ++i)
                    putchar(' ');
            }

            putchar(c);
        }
        else {
            ++spaces;

            if (spaces >= TABSTOP) {
                putchar('\t');
                spaces -= TABSTOP;
            }
        }
}
