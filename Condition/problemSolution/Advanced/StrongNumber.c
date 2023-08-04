#include<stdio.h>


int main(){
   
   int number,sum=0;
   scanf("%d",&number);

   int reserveNumber = number ;

    while(number>=1){
        int remain = number%10;

            // printf("disit is : %d\n",remain);

          int i,fact=1;
            for(i=1;i<=remain;i++){
                fact = i*fact;
            }

            // printf("fact is : %d\n",fact);

        sum =sum + fact;;
        number=number/10;
        fact =1;

        //  printf("fact sssis : %d\n",fact);
        //  printf("number sssis : %d\n",number);
    }


        //  printf("summatio : %d\n",sum);

  if(reserveNumber == sum) printf("Strong");
  else printf("Not");

    return 0;
}