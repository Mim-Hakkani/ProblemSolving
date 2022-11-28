#include<iostream>
using namespace std;
int main(){
    int num,limit;
    cin>>limit;
    for(int j = 1;j<=limit;j++){
        cin>>num;
      int perfectSum = 0;
    for(int i=1;i<=num-1;i++){
        if(num%i==0){   
          perfectSum =perfectSum+i;
        }
         
    }
   if(perfectSum==num){
    cout<<num<<" eh perfeito"<<endl;
   }
   else{
     cout<<num<<" nao eh perfeito"<<endl;
   }
    }
    return 0;
}