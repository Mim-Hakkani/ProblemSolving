#include<stdio.h>
int main()
{
   int i,j,k,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=i;j<=n;j++)
      {
          for(k=j;k<=i;k++)

            printf("%d %d %d",i,j*j,k*k*k);
      }

     printf("\n");

   }
}





