# include<stdio.h>
int sstrlen(char s[])
{
    int i=0;
    while(s[i]!='\0'){
    i+=1;}
    return i;
}
void sstrcpy(char s1[],char s2[]){
    int i=0;
    while(s1[i]!='\0'){
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
}
void sstrcat(char s1[],char s2[]){
    int i=0,j=0;
    while (s1[i]!='\0'){
        i++;
    }
    while (s2[j]!='\0'){
        s1[i]=s2[j];
        i++;
        j++;    }
    s1[i]='\0';
}
int main ()
{
    char s1[50],s2[50];
    char s3[50];
    printf("enter ist string ");
    scanf("%s",s1);
    printf("enter second string ");
    scanf("%s",s2);
    int c=sstrlen(s1);
    int d=sstrlen(s2);
    printf("length of strings are %d %d\n", c,d);
    sstrcpy(s1,s3);
    printf("copied string is %s \n",s3);
    sstrcat(s1,s2);
    printf("concentrated string is %s \n",s1);
    return 0;

}