// 121 is the palandrome 

#include<stdio.h>
int main(){
    int num,reversed=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    int number = num;
    
    
    while(num>0){
         int digit =num%10;
         reversed = reversed*10 + digit;
         num = num/10;

    }



   if(reversed == number){
    printf("Palendrome Number\n");
   }
   else{
    printf("Not Palandrome");
   }
    

    // 142 in reverse 241 
    return 0;
}