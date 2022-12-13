#include <stdio.h>
#define SEC_PER_YEAR 3.156e7

int main(void)
{
    double age, seconds;

    printf("Please enter your age:");
    scanf("%lf", &age);
    seconds = age * SEC_PER_YEAR;
    printf("%g years old includes %g seconds.\n", age, seconds);

    return 0;
}
