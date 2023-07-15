/*
 calculate 5 students avg : 

 firstTerm : {85,68,95,49,78}
 secondTerm : {69,98,85,94,92}
 ThirdTerm : {88,89,98,79,82}

*/

#include<iostream>
using namespace std;

int main(){
    float avg[5];
    int first[5],second[5],third[5];

    cout<<"First SemisterExm";
    for(int i=0;i<5;i++){
        cin>>first[i]>>second[i]>>third[i];
        int total = first[i]+second[i]+third[i];

        avg[i] = (float) total /3;

    }
//   cout<<"Second SemisterExm";
   float max = avg[0];
   float min = avg[0];
    for(int i=0;i<5;i++){
        if(avg[i+1]>max){
            max = avg[i+1];
        }
    
        cout<<i+1<<".Average Result is : "<<avg[i]<<"\n";
        
    }

cout<<"First Position Marks is : "<<max<<"\n";

}