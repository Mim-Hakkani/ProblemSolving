// problem Name : Write a program to find the maximum among three numbers.
#include <stdio.h>
int main()
{
    int number,number2,number3;
    printf("Enter three number : ");
    scanf("%d %d %d", &number,&number2,&number3);
    if(number>number2 && number >number3){
        printf("%d `is the maximum number\n",number);
    }
     else if(number2>number && number2 >number3){
        printf("%d `is the maximum number\n",number2);
    }
    else{
               printf("%d `is the maximum number\n",number3);

        
    }

    return 0;
}

/*
input :
Enter 5,15,7 

output :
Maximum number is : 15 
*/