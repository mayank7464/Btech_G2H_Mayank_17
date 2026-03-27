# include<stdio.h>
# include<string.h>
int main()
{
    char s[50];
    char rev[50];
    scanf("%s", s);
    int i=0,n;
    n=strlen(s);
    while (i<n)
    {
      rev[i]=s[n-i-1];
      i++;
    }
    rev[n]='\0';
    printf("reversed string is %s", rev);
    return 0;
  }