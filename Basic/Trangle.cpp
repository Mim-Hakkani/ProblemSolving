#include<iostream>
using namespace std;
int main(){
    float a,b,c,peremeter,area;
    cout<<"side1: "; cin>>a;
    cout<<"Base: "; cin>>b;
    cout<<"Height: ";cin>>c;

    if((a+b)>c){
        peremeter = a+b+c;
       area = (b*c)/2;

      printf("Area Of Trange is :: %0.2lf\n",area);
      printf("Premeter Of Trange is :: %0.2lf\n",peremeter);
    }
}