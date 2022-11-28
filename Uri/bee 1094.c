#include<stdio.h>
int main()
{
   int i,N,tl=0,col=0,rat=0,sap=0;
   char n,o='%';
   float res,res1,res2,a;
   scanf("%d",&N);
   for(i=1;i<=N;i++)
   {
      scanf("%f %c",&a,&n);
      if(a>=1 && a<=15 && n=='C' || n=='R'|| n=='S')
      {
         tl=tl+a;
         if(n=='C')
         {
            col=col+a;
         }
          else if(n=='R')
         {
            rat=rat+a;
         }
          else if(n=='S')
         {
            sap=sap+a;
         }
      }
   }
   res=(float)(col*100)/tl;
   res1=(float)(rat*100)/tl;
   res2=(float)(sap*100)/tl;
   printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",tl,col,rat,sap);
   printf("Percentual de coelhos: %0.2f %c\nPercentual de ratos: %0.2f %c\nPercentual de sapos: %0.2f %c\n",res,o,res1,o,res2,o);
}
