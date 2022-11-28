#include<stdio.h>
int main()
{
   int i,count=0,p,u;
   float sum=0,avg;
   while(1)
   {
      scanf("%d",&p);
      if(p>0)
      {


      u=++count;
      sum=(sum+p);

      }

      else
      {
         break;
      }


   }
   printf("%0.2f\n",sum/u);


}
