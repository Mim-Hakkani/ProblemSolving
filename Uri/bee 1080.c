#include<stdio.h>
int main()
{
   int a,i,n,j=0,k=0;
   for(i=1;i<=100;i++)
   {
      scanf("%d",&a);
      ++j;
      if(a>k)
      {
         n=j;
         k=a;
      }
   }
   printf("%d\n%d\n",k,n);
}
