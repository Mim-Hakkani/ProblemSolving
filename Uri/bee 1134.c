#include<stdio.h>
int main()
{
   int i,count=0,count1=0,count2=0,j,n;
   while(1)
   {
      scanf("%d",&n);
      if(n==4)
      {
         break;
      }
      else if(n==1)
      {
         count++;

      }
       else if(n==2)
      {
         count1++;

      }
       else if(n==3)
      {
         count2++;

      }
    else continue;



   }
   printf("MUITO OBRIGADO\n");
   printf("Alcool: %d\n",count);
   printf("Gasolina: %d\n",count1);
   printf("Diesel: %d\n",count2);
}
