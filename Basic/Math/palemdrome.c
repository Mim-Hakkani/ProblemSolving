#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
int temp,number,i,reminder,paldrome_input,reverse=0;
printf("How many number : ");
scanf("%d",&number);

for(i=1;i<=number;i++){
    scanf("%d",&paldrome_input);
     temp = paldrome_input;

    while (paldrome_input!=0)
    {
        reminder=paldrome_input%10;
        reverse = reverse*10 + reminder;
        paldrome_input/=10;
    }

    // printf("mr : %d\n",reverse);
    // printf("mrdsd : %d\n",temp);
    
    //check palamdrome 

    if(reverse == temp){
        printf("Is Palindrome: 1\n");
    }
    else{
          printf("Is Palindrome: 0\n");
    }
    
    temp =0;
    reverse=0;
}


return 0 ;
}