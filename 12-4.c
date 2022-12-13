#include<stdio.h>

int count=0;

int counter(void);
int main()
{
    int n;
    printf("Plese enter an integer: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("count = %d\n",counter());
    }
    printf("The function called %d times.\n",count);
    return 0;
}

int counter(void)
{
    count++;
    return count;
}
