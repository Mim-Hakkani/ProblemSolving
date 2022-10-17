/*

45. Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50. 

Expected Output:
Value of S: 4.50

*/

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