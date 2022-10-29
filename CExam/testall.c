#include<stdio.h>
int main(){
    int number,Number,i,flag=1;
    scanf("%d",&number);
    if(number==2){
       flag=1;
    }
    else if(number%2==0 || number<0 || number==1)
    {
        flag=0;

    }

    else{        
        
          for(i=3;i<=number/2;i++){
            if(number%i==0){flag=0;break;}
          }
    }

    if(flag==0) printf("Composite \n");
    if(flag==1) printf("Prime\n");
    return 0;
}
