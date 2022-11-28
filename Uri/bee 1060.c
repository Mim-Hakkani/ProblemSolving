#include<stdio.h>
int main()
{  double n;
   int i,j[10],count=0;
   for(i=0;i<=5;i++)
   {
      scanf("%lf",&n);
      if( n>0)
      {
         count++;

      }

   }
 printf("%d valores positivos\n",count);
}
