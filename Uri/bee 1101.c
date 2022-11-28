#include<stdio.h>
int main()
{
   int M,N,i,sum=0;
   while(1)
   {
   sum=0;
   scanf("%d %d",&M,&N);
   if(M<=0||N<=0)
      break;
 else if(M>N){
   for(i=N;i<=M;i++)
   {

      sum=sum+i;
      printf("%d ",i);
   }
   printf("Sum=%d\n",sum);

   }
   else
      {
   for(i=M;i<=N;i++)
   {

      sum=sum+i;
      printf("%d ",i);
   }
   printf("Sum=%d\n",sum);

   }
   }
}
