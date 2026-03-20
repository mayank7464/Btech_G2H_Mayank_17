# include<stdio.h>
int main()
{
    int n;
    printf("enter number \n");
    scanf("%d", &n);
    int i;
    printf("factors of number are \n");
    for(i=1;i<=n;i++)
    {
        if ( n%i==0 )
        {
            printf("%d", i);
            printf(" ");
        }
    }
    return 0;
}