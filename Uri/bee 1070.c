#include<stdio.h>
int main()
{
   int X,i,lop;
   scanf("%d",&X);
   for(i=1;i<=2*6;i+=2)
   {
      lop=X+i;
      printf("%d\n",lop);
   }
   return 0;
}
