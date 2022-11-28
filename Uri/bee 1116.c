#include<stdio.h>
int main()
{
   int N,X,Y,i;
   float p;
   scanf("%d",&N);
   for(i=1;i<=N;i++)
   {
      scanf("%d %d",&X,&Y);

       if(Y==0){
         printf("divisao impossivel\n");
       continue;
      }
      p=(float)X/Y;


      printf("%.1f\n",p);


   }
   return 0;
}
