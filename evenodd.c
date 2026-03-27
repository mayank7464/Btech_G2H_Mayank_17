# include<stdio.h>
int main()
{
    int n,i,ceven=0,codd=0;
     printf("enter number");
     scanf("%d", &n);
     int a[n];
     for(i=0;i<n;i++)
     {
        scanf("%d", &a[i]);
     }
     for(i=0;i<n;i++)
     {
        if (a[i]%2==0)
        {
            ceven+=1;
        }
        else
        {
            codd+=1;
        }
     }
     printf("even numbers=%d",ceven);
     printf("odd number =%d",codd);
     return 0;
}