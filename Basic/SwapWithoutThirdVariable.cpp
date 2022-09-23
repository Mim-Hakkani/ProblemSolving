
 #include<iostream>
 using namespace std ;
 int main(){
        int a,b; 

    cout<<"First Number : ";
    cin>>a;

    cout<<"Second Number : ";
    cin>>b ;

    cout << "Before Swap a : b = "<< a <<" : "<<b<<endl;
   
     a = a+b;
     b= a-b;
     a= a-b;

    cout << "After Swap a : b = "<< a <<" : "<<b<<endl;

return 0;

    
 }