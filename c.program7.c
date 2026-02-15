# include<stdio.h>
# include<math.h>
  int main()
{  float a,b,c;
    printf("enter three numbers \n");
    scanf("%f%f%f",&a,&b,&c);
   if (a>=c && a>=b) 
   {   printf("greatest number is %f",a);
   }
   else if (b>=a && b>=c)
   {  printf("greatest number is %f",b);
   }
   else 
   {  printf("greatest number is %f",c);
   }
   return 0;
}

       
       