#include <stdio.h>
#define MIN_PER_HOUR 60

int main(void)
{
    int m, hour, min;

    printf("Please enter a number for minute (<= 0 to quit): ");
    while ((scanf("%d", &m) == 1) && (m > 0))
    {
        hour = m / MIN_PER_HOUR;
        min = m % MIN_PER_HOUR;
        printf("%d minutes = %d hours and %d minutes.\n", m, hour, min);
        printf("You can enter again (<= 0 to quit): ");
    }
    printf("Done.\n");

    return 0;
}
