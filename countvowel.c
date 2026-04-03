# include <stdio.h>
# include<string.h>
int main(){
    char s[100];
    scanf("%s", s);
     int i;
     int n,count=0;
     n=strlen(s);
     for (i=0;i<n;i++){
        if (s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u' ){
            count+=1;
        }
     }
     printf(" number of vowels are %d",count);
    return 0;
}