#include<stdio.h>
int main()
{
   int X,j;

   while(1)
   {
      scanf("%d",&X);

      if(X==0)
      break;

   for(j=1;j<X;j++)
   {
      printf("%d ",j);
   }
   printf("%d\n",X);
   
   }
   return 0;
}
