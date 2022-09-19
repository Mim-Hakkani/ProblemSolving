/*

46. Write a C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8. 

Expected Output:
Value of series: 4.62

*/

#include<iostream>
using namespace std ;
int main(){
    float sum =1, j = 1;
    
    for(int i = 3;i<=7;i+=2){
          j = j*2; 
         sum += (float) i/j ;
        //   cout<<i << " " << j <<endl;
          

    }

     printf("Value of S : %0.2f\n",sum);

}