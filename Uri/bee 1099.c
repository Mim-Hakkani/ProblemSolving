#include<stdio.h>
int main()
{
  int N,i,j,X,Y,sum=0;
  scanf("%d",&N);
  for(i=1;i<=N;i++)
  {
     scanf("%d %d",&X,&Y);

     if(X==Y)
     {
        sum=0;
        printf("%d\n",sum);
     }
     else if(X<Y)
     {
        for(j=X+1,sum=0;j<Y;j++)
        {
           if(j%2==1)
            sum=sum+j;
        }

        printf("%d\n",sum);


     }

     else
     {
        for(j=Y+1,sum=0;j<X;j++)
        {


           if(j%2==1)
            sum=sum+j;
        }
        printf("%d\n",sum);
     }



  }
}


