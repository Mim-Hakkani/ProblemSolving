#include<stdio.h>
int main()
{
   int i,j,k,a;
   i=1;
   j=2;
   k=3;
   scanf("%d",&a);
   while(i<=4*a-3,j<=4*a-2,k<=4*a-1)
   {
      printf("%d %d %d PUM\n",i,j,k);
      i+=4;
      j+=4;
      k+=4;
   }
return 0;
}
