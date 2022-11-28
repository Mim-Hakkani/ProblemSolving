#include<stdio.h>
int main()
{
   float s=1,p;
   int i,j;
   for(i=3,j=2;i<=39;j=j*2,i+=2)
   {
      //s=1;
     p=(float)i/j;
     s=s+p;



   }
  printf("%0.2f\n",s);

}



