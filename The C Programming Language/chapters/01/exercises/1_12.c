#include <stdio.h>

#define IN 1
#define OUT 0

/* print every word in a new line */
main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (state == IN)
                putchar('\n');
            state = OUT;
        }
        else
        {
            state = IN;
            putchar(c);
        }
    }
}
