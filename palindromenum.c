# include<stdio.h>
int main()
{
    int n;
    printf("enter number \n");
    scanf("%d", &n);
    int i,b,a=0;
    int num=n;
    for(;n!=0;n/=10)
    {
        b=n%10;
        a=a*10 + b;
    }
    if (a==num)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("not palindrome ");
    }
    return 0;
}