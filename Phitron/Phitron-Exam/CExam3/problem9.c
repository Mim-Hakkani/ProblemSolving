/*
 Mixed Array

Problem Statement
You are given an array of size n. And the next line will contain n positive integers. Find the number of prime numbers in the array and find the average of all even integers in the array. Implement it using two functions(one is for prime and second one is for finding the average) and traverse the array using pointers.

See the sample input-output for more clarification.

Sample Input-
-----------------------
5
2 5 9 11 14

Sample Output-
-----------------------
Prime numbers: 3
Average of all even integers: 8.00

*/

#include<stdio.h>
int Isprime(int num){

    // printf(" aa : %d\n",num);

    int flag = 0,i;

    for(i=2;i<=num/2;i++){
        
		if(num%i==0)
		{
			flag =1;
			break;
		}
	}
	//flag is 1, if number is not prime
  
	if(flag==1)
		return 0;
	else
		return 1;
    }
   
int IsEvenAvg(int num){
    if(num%2==0){
        return 1;
    }
    else return 0;
   
}
int main(){
    int a[100],n,i,count=0,sum=0,evencount=0;
    scanf("%d",&n);
     for( i=0;i<n;i++){
        scanf("%d",&a[i]); // using pointer is same as &a[i]
        
    }
   
     for(i=0;i<n;i++){
             
           
            if(Isprime(a[i])==1) {
                count++;
            };

            //  printf("avg =  %d\n",IsEvenAvg(a[i]));

             if(IsEvenAvg(a[i])==1){
                evencount++;
                sum =sum +a[i] ;
             }
    }


  printf("Prime numbers: %d\n",count);
  printf("Average of all even integers: %0.2f\n",(float)sum/(float)evencount);
}