#include <stdio.h>
int main()
{
    long long int i,j,count=0,n;
     scanf("%lld", &n);
     if(n>=1 && n<=1000000000){
     for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            count++;
        }
     }
      printf("%lld\n",count);
        }
    
     return 0;
    }
