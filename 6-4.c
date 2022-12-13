#include <stdio.h>
#define N 6

int main(void)
{
    int i, j;
    char ch = 'A';

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", ch++);
        }
        printf("\n");
    }

    return 0;
}
