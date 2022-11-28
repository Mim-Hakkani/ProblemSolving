#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int num,limit;
    cin>>limit;
     int k =0;
    for(int i = 1;i<=limit;i++){
        cin>>num;
          if(num==0 || num==1) cout<<num<<" nao eh primo"<<endl;
          if(num==2) cout<<num<<" eh primo"<<endl;

         else if(num>2){for(int j = 2;j < num;j++){
            if(num%j == 0){
            k = 2;
            break;
            }
            else k = 1;
    }
       if(k == 2)printf("%d nao eh primo\n", num);
       else if(k == 1)printf("%d eh primo\n", num);
    }

         
    }

    return 0;
}