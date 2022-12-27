

//example of call by value :

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