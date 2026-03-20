#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d", &n);
    int a[n];
    int b[n];
    printf("enter array \n");
    int i;
    for (i=0;i<n;i++)
    {
      scanf("%d", &a[i]);
    }
    int max;
    max=a[0];
    for (i=0;i<n;i++)
     {
        if (max<a[i])
        {
            max=a[i];
        }
    }
    printf("largest element of array is %d",max);
    return 0;
}