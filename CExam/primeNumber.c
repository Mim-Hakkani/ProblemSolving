#include<stdio.h>
int main(){
    int number,Number,i;
    scanf("%d",&number);
    if(number==2){
        printf("Prime\n");
    }
    else if(number%2==0 || number<0 || number==1)
    {
        printf("Composite\n");
        
    }
    
    else{        
         i = 3;
            while(number>=i){
                if(number%i==0){ printf("Composite\n");break;}
                else{
              printf("Prime\n");
                     break;
                }
                i++;
            }
    }
}