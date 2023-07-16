#include<stdio.h>

void func(int *p){
    *p = 18;
}
int main(){
    int a = 5;
    
    // declate the function 
    func(&a);

    printf("a : %d\n",a);
    return 0;
}