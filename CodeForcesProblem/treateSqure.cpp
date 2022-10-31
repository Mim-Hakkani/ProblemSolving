#include<iostream>
#include <cmath>
using namespace std;
int main(){
    long long  height,length,squre,coverheight,coverwidth;
    cin>>height>>length>>squre;

     coverheight= (height-1)/(squre+1);
     coverwidth = (length-1)/(squre+1);

    cout<<coverheight*coverwidth<<"\n";
    return 0;
}