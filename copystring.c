# include<stdio.h>
# include<string.h>
int main()
{
    char s[50];
    char r[50];
    scanf("%s", s);
    int i=0,n;
    n=strlen(s);
    for(i=0;i<n;i++){
        r[i]=s[i];
    }
    r[n]='\0';
    printf("new string is %s", r);
    return 0;
}