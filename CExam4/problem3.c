
// pointer : A pointer is a variable that stores the memory address of another variable as its value. 

//  Difference Between CallBy value  and Call By reference : 

//  1. CallBy Value Directly Access the value but not memory address 
//  2. Otherwise Call by reference access the memory address not value 
//  3. In function call by value is easy to use but call by reference is not 
//  4. using call by values if value is changes in another function main function is not affected but call by reference changes value then main function value is changes.Because it works with the  memory address 

//example of call by value and references :

#include<stdio.h>
void SwapNumber(int a,int b,int *ptr){
    a = 5;
    b=10;
   *ptr=42;
}
int main(){
    int a = 10,b=5,c=15;
    int *ptr;
    ptr = &c;
    SwapNumber(a,b,ptr);

    printf("a = %d\nb = %d\nc= %d\n",a,b,c);
    return 0;
}