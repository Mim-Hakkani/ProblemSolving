#include<stdio.h>
int main()
{
   int i,N;
   float avg,a,b,c;
   scanf("%d\n",&N);
   for(i=0;i<N;i++)
   {
      scanf("%f %f %f",&a,&b,&c);
      avg=(float)(a*2+b*3+c*5)/10;

      printf("%.1f\n",avg);


   }

   //avg=(a*2+b*3+c*5)/10;
   //printf("%d\n%d\n%d\n",avg,avg,avg);
   return 0;
}
