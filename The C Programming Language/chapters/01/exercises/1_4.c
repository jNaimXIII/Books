#include <stdio.h>

main()
{
    float celsius, fahrenheit;
    int lower, upper, step;

    lower = 0;
    upper = 30;
    step = 5;

    printf("CELSIUS | FAHRENHEIT\n");

    celsius = lower;
    while (celsius <= upper) {
        fahrenheit = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%7.0f | %10.1f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }
}
