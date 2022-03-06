#include <stdio.h>

int main()
{
   int a,b,c;
   printf("enter 3 numbers");
   scanf("%d\t%d\t%d",&a,&b,&c);
   if(a>b)
   {
      if(a>c)
      {
         printf("largest is %d",a);
      }
      else
      printf("largest is %d",c);
   
   }
   else
   {
      if(b>c)
      {
         printf("largest is %d",b);
      
      }
      else
   {
      printf("largest is %d",c);
   }
   }
return 0;
}
