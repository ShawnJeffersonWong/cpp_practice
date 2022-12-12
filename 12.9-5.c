#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LEN 100
void sort(int a[],int n);
void showArray(int a[],int n);
int main()
{
    srand((size_t)time(NULL));
    int arr[LEN];
    for(int i=0;i<LEN;i++)
    {
        arr[i]=rand()%10+1;
    }
    printf("Array:\n");
    showArray(arr,LEN);
    sort(arr,LEN);
    printf("After sorting:\n");
    showArray(arr,LEN);
    return 0;
}

void sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void showArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%-3d", a[i]);
        if ((i + 1) % 10 == 0)
        {
            putchar('\n');
        }
    }
    putchar('\n');
}
