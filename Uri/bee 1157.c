#include<stdio.h>
int main()
{
   int a,i,s;
   scanf("%d",&s);
   for(i=1;i<=s;i++)
   {
     if(s%i==0)
     {
       printf("%d\n",i);
     }
   }
   return 0;
}
