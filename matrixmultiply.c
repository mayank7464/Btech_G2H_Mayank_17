# include<stdio.h>
int main()
{
  int n,m,l;
  printf("enter rows of 1st matrix");
  scanf("%d",&n);
  printf("enter columns of 1st matrix");
  scanf("%d",&m);
  printf("enter columns of 2st matrix");
  scanf("%d",&l);
  int a[n][m];
  int b[m][l];
  int c[n][l];
  int i,j,k;
  printf("enter 1st matrix :\n");
  for (i=0;i<n;i++)
  { 
    for(j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("enter 2nd matrix");
for (i=0;i<m;i++)
  { 
    for(j=0;j<l;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
  for (i=0;i<n;i++)
  { 
    for(j=0;j<l;j++)
    { 
        c[i][j]=0;
        for (k=0;k<m;k++)
        {  
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }
}
    printf("result matrix :\n");
for (i=0;i<n;i++)
  { 
    for(j=0;j<l;j++)
    {  
        printf("%d",&c[i][j]);
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}















