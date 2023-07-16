/*
Consecutive Even Numbers
 
The Problem Statement:
Make a simple program that reads one variable named N which is the summation of 4 consecutive even numbers. Print the 4 consecutive even numbers whose summation is N.
12 + 14 + 16 + 18 = 60
 
Input Format
The first line contains an integer T (1 ≤ T ≤ 3).
The Second line contains one integer number N (N<=5000). 
Output Format
Output will show the 4 consecutive even integer numbers separated by space in a separate line.
 
Note: Implement it using function.
 
Sample Input
Sample Output
3
100
812
4052
22 24 26 28
200 202 204 206
1010 1012 1014 1016
2
452
508
110 112 114 116
124 126 128 130

*/

#include<stdio.h>
int main(){
    int n,number,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&number);
        int con=(number-12)/4;

        while(con!=number){
            printf("%d ",con);
            sum+=con;
            if(sum==number){
                sum=0;
                break;
               
            }
            con+=2;

        }
        printf("\n");
       
        
    }
    return 0;
}

