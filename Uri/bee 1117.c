#include<stdio.h>
int main()
{
  float a,b,sum=0,count=0,med;
   while(1)
   {
      scanf("%f",&a);
      if(a<0 || a>10)
      {
         printf("nota invalida\n");
      }
      else
      {
         sum=sum+a;

         count++;

         if(count==2)
         {
            med=(float)sum/2;

            break;
         }
      }

   }
   printf("media = %0.2f\n",med);
}
