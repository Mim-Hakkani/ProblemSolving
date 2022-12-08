/*
You have given a series, 1+2+3-4-5-6+7+8+9-10-11-12+......N . Your task to print the sum of the Nth element.

Sample Input 1
10

Sample Output 1
5

Sample Input 2
20

Sample Output 2
12

Explanation of Sample Input 2:
1+2+3-4-5-6+7+8+9-10-11-12+13+14+15-16-17-18+19+20 = 12. Sum up to the 20th of this series.

*/


#include<stdio.h>
int main(){
    int i,j,n,sum=0,count=0,c2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        count++;
        // printf("count : %d\n",count);
        if(count>3){
            //  printf("count greater 3 : %d\n",count);
            //  printf("count greater i : %d\n",i);
            sum = sum-i;
            // printf("Sum: %d\n",sum);


            if(i%3==0) { 
                count =0;
                }


        }
        else{
          sum = sum+i;
        }
        

   
    }

    printf("%d\n",sum);
    
    return 0;
}