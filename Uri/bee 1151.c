#include<stdio.h>
int main()
{
   int N,i,f1=1,f0=0,sum;

   scanf("%d",&N);
   if(N>0 || N<46)
   {

   printf("0 1");
   for(i=1;i<N-1;i++)
   {
      sum=f0+f1;

      f0=f1;
      f1=sum;
       printf(" %d",sum);

   }
   printf("\n");
   }

}
