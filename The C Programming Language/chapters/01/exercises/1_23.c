#include <stdio.h>

#define IN 1
#define OUT 0

/* remove comments from c programs */
main()
{
    int c;
    int previous, state;

    previous = '\0';
    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == '*') {
            if (previous == '/')
                state = IN;
        } else if (c == '/') {
            if (previous == '*')
                state = OUT;
        } else if (state == OUT) {
            putchar(c);
        }

        previous = c;
    }
}
