#include<stdio.h>
int main()
{
   int a,num;
   int count=0;
   int count1=0;
   int count2=0;
   int count3=0;
   for(a=1;a<=5;a++)
   {
      scanf("%d",&num);
      if(num%2==0)
      {
         count++;


      }
      if(num%2!=0)
      {
         count1++;


      }
      if(num>0)
      {
         count2++;


      }
      if(num<0)
      {
         count3++;


      }
   }

   printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",count,count1,count2,count3);


}
