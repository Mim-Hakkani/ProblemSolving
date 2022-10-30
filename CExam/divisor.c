/*
divisor : 12
output : 1,2,3,4,6,12
*/

#include<stdio.h>
int main(){
    int number,i,rem;
    scanf("%d",&number);
    printf("The factors of %d are: ",number);
    i=1;
    rem=number/2;
    while(rem>=i){
        if(number%i==0){
            printf("%d,",i);
        }
        i++;
    }
    printf("%d\n",number);

    return 0;
}