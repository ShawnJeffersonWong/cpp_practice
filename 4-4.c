#include <stdio.h>
#define LEN 30

int main(void)
{
    float heigh;
    char name[LEN];

    printf("Please enter your name:");
    scanf("%29s", name);
    scanf("%f", &heigh);
    printf("%s, you are %.3f feet tall.\n", name, heigh / 12.0);

    return 0;
}
