#include<iostream>
using namespace std ;

int Divisible(int initial,int destination){
    int sum = 0 ;
    for(int i = initial;i<=destination;i++)
    {
        if(i%17!=0){
            sum = sum +i ;
        }
    }

    // cout<<"Sumation is : "<<sum<<endl;

    return sum;
}

int main(){
    int initial,destination;
    cout<<"Enter The First Number : ";
    cin>>initial;
    cout<<"Enter The Second Number : ";

    cin>>destination;

    int s = Divisible(initial,destination);
    cout<<"Summation number is : "<<s<<endl;
}