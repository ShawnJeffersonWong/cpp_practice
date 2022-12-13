#include <stdio.h>

int main(void)
{
    int n, odd, even;
    int e_sum, o_sum;
    odd = even = 0;
    e_sum = o_sum = 0;

    printf("Please enter a integer (0 to quit): ");
    while (scanf("%d", &n) == 1 && (n != 0))
    {
        if (n % 2 == 0)
        {
            even++;
            e_sum += n;
        }
        else
        {
            odd++;
            o_sum += n;
        }
        printf("You can enter again (0 to quit): ");
    }
    printf("Even number: %d\n", even);
    if (even > 0)
    {
        printf("The average of even: %g\n", (float)e_sum / even);
    }
    printf("Odd number: %d\n", odd);
    if (odd > 0)
    {
        printf("The average of odd: %g\n", (float)o_sum / odd);
    }
    printf("Done.\n");

    return 0;
}
