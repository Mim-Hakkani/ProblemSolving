#include<stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=9;i+=2)
   {
      for(j=7+i-1;j>=7+i-3;j--)
      {
         printf("I=%d J=%d\n",i,j);
      }
     // printf("\n");
   }
   return 0;
}
