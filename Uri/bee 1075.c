#include<stdio.h>
int main()
{
   int p,i,N;
   scanf("%d",&N);
   for(i=0;i<=10000;i++)
   {
      p=N*i+2;


      if(p>10000)
         break;

     printf("%d\n",p);
   }
   return 0;
}
