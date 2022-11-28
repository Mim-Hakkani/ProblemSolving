#include<stdio.h>
int main()
{
   int a,num;
   int count=0;
   for(a=1;a<=5;a++)
   {
      scanf("%d",&num);
      if(num%2==0)
      {
         count++;


      }
   }

   printf("%d valores pares\n",count);


}
