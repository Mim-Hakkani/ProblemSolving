#include<stdio.h>
#include<math.h>
int main()
{
   long i,N,r;
   scanf("%d",&N);
 for(i=2;i<=N;i+=2)
 {
    r=i*i;
    printf("%d^2 = %d\n",i,r);
 }
 return 0;
}
