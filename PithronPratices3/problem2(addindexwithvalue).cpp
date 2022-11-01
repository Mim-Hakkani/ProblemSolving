/*
You will be given an positive integer N and after that an integer array of size N. Then you will be given Q which
refers to queries. For each query you will be given i and v where i refers to the index and v to value. You need to
add the value to that index. After all of the queries print the values

Sample Input: 
5 
1 2 3 4 5
3
0 10
2 5
4 5

Sample Output:
11 2 8 4 10

*/

#include<iostream>
using namespace std;
int main()
{
    int size,numberOfQuery,indexNumber,value;
    cout<<"Enter the size of array : ";
    cin>>size;
    int a[size];
    
    // input number of array 

    for(int i=0;i<size;i++){
        cin>>a[i];
    }

// input query to find index 

    cout<<"Number Of Query : ";
    cin>>numberOfQuery;

    // assign index with new number 

    for(int j=0;j<numberOfQuery;j++){
        cin>>indexNumber>>value;
        a[indexNumber] =   a[indexNumber] + value;  
    }


    // show the  additional merge array final output  

  for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

return 0;

}