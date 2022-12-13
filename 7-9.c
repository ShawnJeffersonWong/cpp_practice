#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, n, number, prime;

    printf("Please enter a number (<= 0 to quit): ");
    while (scanf("%d", &number) == 1 && (number > 0))
    {
        if (number == 1)
        {
            printf("1 isn't a prime!\n");
            printf("You can enter again (<= 0 to quit): ");
            continue;
        }
        printf("Here are the prime (<= %d):\n", number);
        for (i = 2; i <= number; i++)
        {
            prime = 1;
            for (n = 2; n <= sqrt(i); n++)
            {
                if (i % n == 0)
                {
                    prime = 0;
                    break;
                }
            }
            if (prime)
            {
                printf("%-3d", i);
            }
        }
        printf("\nYou can enter again (<= 0 to quit): ");
    }
    printf("Done.\n");

    return 0;
}
