# include<stdio.h>
int main()
{
    int n;
    printf("enter number \n");
    scanf("%d", &n);
    int b=0;
    for( ; n!=0 ; n/=10 )
    {
        b+=1;
    }
    printf(" number of digits  is %d",b);
}