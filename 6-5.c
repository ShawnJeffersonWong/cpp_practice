#include <stdio.h>

int main(void)
{
    int i, j;
    char ch;

    printf("Please enter a upper letter: ");
    scanf("%c", &ch);

    int length = ch - 'A';
    printf("The pyramid of %c is:\n", ch);
    for (i = 0; i <= length; i++)
    {
        char t = 'A' - 1;
        for (j = 0; j < length - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%c", ++t);
        }
        for (j = 0; j < i; j++)
        {
            printf("%c", --t);
        }
        printf("\n");
    }

    return 0;
}
