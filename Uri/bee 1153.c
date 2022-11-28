#include<stdio.h>
int main()
{
   int N,i,fac=1;
   scanf("%d",&N);
   if(N>0 && N<15)
   {
      for(i=1;i<=N;i++)

      fac=fac*i;

   }
   printf("%d\n",fac);
}
