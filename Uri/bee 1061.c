// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int s,s2,h,h2,m,m2,d,d2;
    string temp;
    cin>>temp>>d;
    cin>> h >>temp>> m >>temp>> s;
    
    cin>>temp>>d2;
    cin>> h2 >>temp>> m2 >>temp>> s2;
    
    s =s2-s;
    m=m2-m;
    h=h2-h;
    d=d2-d;
    
    //for seconds 
    if(s<0){
        s=s+60;
        m--;
    }
    //for miniutes 
    if(m<0){
        m=m+60;
        h--;
    }
    //for hour
    
    if(h<0){
        h=h+24;
        d--;
    }
    
        cout<<d <<" dia(s)"<<endl;
        cout<<h <<" hora(s)"<<endl;
        cout<<m <<" minuto(s)"<<endl;
        cout<<s <<" segundo(s)"<<endl;
    
    

    return 0;
}