#include<stdio.h>
int main()
{
    char str[50];

    scanf("%s",str);
    int i=0,l=0;
     while(str[i]!='\0')
    {
        i++;
    }
    printf(" length of string is %d",i);
    return 0;

}