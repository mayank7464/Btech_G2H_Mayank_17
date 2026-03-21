# include<stdio.h>
int main()
{
    int n,b,c=1;
    printf("enter number \n");
    scanf("%d", &n);
    printf("entr power :");
    scanf("%d", &b);
    int i;
    for(i=1;i<=b;i++)
    {
        c=c*n;
    }
    printf("result is %d", c);
    return 0;
}


