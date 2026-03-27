# include<stdio.h>
int main()
{
    int n,i,ceven=0,codd=0;
     printf("enter number");
     scanf("%d", &n);
     int a[n];
     float count=0,sum=0;
     float avg;
     for(i=0;i<n;i++)
     {
        scanf("%d", &a[i]);
     }
     for(i=0;i<n;i++)
     {
        count+=1;
     }
     for(i=0;i<n;i++)
     {
        sum+=a[i];
     }
     avg=(sum/count);
     printf("sum is %f",sum);
     printf("average is %f",avg);
     return 0;
    }
