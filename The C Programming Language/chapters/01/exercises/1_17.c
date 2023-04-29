#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print input line over length 80 */
main()
{
    int min;                  /* minimum length to print */
    int len;                  /* current line length */
    char line[MAXLINE];       /* current input line */

    min = 80;
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        if (len > min) {
            printf("%d %s", len, line);
        }
    }

    return 0;
}

/* get_line:  read a line into s, return length */
int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
