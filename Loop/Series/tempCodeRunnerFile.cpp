#include<iostream>
using namespace std ;
int main(){
    int n;
    float sum =1;
    
    for(int i = 2 ;i<=50;i++){
         sum = sum + (float) 1 / i;;
    }

     printf("Value of S : %0.2f\n",sum);

}