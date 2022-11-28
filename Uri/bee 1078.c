#include<stdio.h>
#include<math.h>
int main()
{
   long N,num,i,p;
   scanf("%ld",&N);
   for(i=1;i<=10;i++)
   {
     num=i*N;
     printf("%d x %d = %d\n",i,N,num);
   }
   //printf("%d\n",num);
   return 0;
}
