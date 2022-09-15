#include<iostream>
using namespace std ;
int main(){
    int first,last ,mid,search;
    int numbers[8] ={1,2,3,4,5,6,7,8};
    cin>>search;
    cout<<"mim vai search"<<search;

while (1)
{
     first =0;
     last = 7;
     mid = (first + last)/2;

         if(numbers[mid]==search) {
        cout<<"Searching number is ::"<<numbers[mid]<<endl;
        break;
     }

    if(numbers[mid]<search){
        first =mid+1;
    }
    
    if(numbers[mid]>search){
        last = mid-1;
    }

}



}