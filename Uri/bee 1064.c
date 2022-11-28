#include<stdio.h>
int main()
{
   float a,avg,num,sum=0;
   int count=0;
   for(a=1;a<=6;a++)
   {
      scanf("%f",&num);
      if(num>0)
      {
         count++;
         sum=sum+num;


      }
   }

   printf("%d valores positivos\n",count);
   printf("%.1f\n",sum/count);

}
