#include<iostream>
#include <vector>
using namespace std;
int main(){
    int num[14];
    for(int i=0;i<15;i++){
        cin>>num[i];
}
   int even_count = 0;
   int odd_count = 0;
  vector<int>remain;
  
      for(int i=0;i<15;i++){   
        if(num[i]%2==0){

            if(even_count<5){
             cout<<"par["<<even_count++<<"] = "<<num[i]<<"\n";
            }
          
           
            if(even_count>=5){
    
                remain.push_back(num[i]);
            }

            
            
        }
 
    }


      for(int i=0;i<15;i++){
        
             if(num[i]%2!=0){
          
            cout<<"impar["<<odd_count++<<"] = "<<num[i]<<"\n";
            if(odd_count==5){
                odd_count=0;
            }
            
        }
 
    }


    int length = remain.size();

 for(int i=1;i<length;i++){   
        if(remain[i]%2==0){
          
            cout<<"par["<<i-1<<"] = "<<remain[i]<<"\n";
            if(i==5){
                i=0;
            }
        }
 
    }

   
    return 0;
}