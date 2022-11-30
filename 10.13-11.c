#include <stdio.h>

void twoTimes(int arr[][5], int M);

int main()
{
    int arr[3][5] =
        {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}
        };
        twoTimes(arr,3);
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<5;j++)
            {
                printf("%d ",arr[i][j]);
            }
            putchar('\n');
        }
    return 0;
}

void twoTimes(int arr[][5], int M)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] *= 2;
        }
    }
    return;
}