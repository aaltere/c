#include <stdio.h>

int main()
{
    float celcius, fahrenheit;
    int start, stop, step;

    start = 0;
    stop = 300;
    step = 20;

    printf("Temperature conversion table\n");

    celcius = start;
    while (celcius <= stop)
    {
        fahrenheit = (9.0 * celcius / 5.0) + 32;

        printf("%3.0f %6.0f\n", celcius, fahrenheit);

        celcius += step;
    }

    return 0;
}