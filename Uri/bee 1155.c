#include<stdio.h>
int main()
{
   float i,s=0,p;
   for(i=1;i<=100;i++)
   {
      p=(1/i);
      s=s+p;
   }
   printf("%0.2f\n",s);
}
