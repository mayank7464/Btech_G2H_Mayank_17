# include<stdio.h>
int main()
{
    int n,m,i;
    printf("enter two numbers \n");
    scanf("%d%d", &n,&m);
    int  ch;
    printf("1=LCM \n");
    printf("2=GCD \n");
    printf("enter choice \n");
    scanf("%d", &ch);
if (ch==1){
    for(i=1;i<(n*m);i++)
    {
        if (i%n==0 && i%m==0)
         {
            printf(" LCM of given numbers is %d", i);
            break;
         }
    }
}
else if (ch==2){
    int temp=1;
    for(i=1;i<n*m;i++){
        if (n%i==0 && m%i==0){
            temp=i;
        }
    }
    printf("GCD of given numbers is %d",temp);
}
else {
    printf("invalid choice");
}
    return 0;

}