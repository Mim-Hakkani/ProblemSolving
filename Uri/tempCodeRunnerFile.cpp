<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j = 0 ; 
    for(int i =0;i<1000;i++){

           
        cout<<"N["<<i<<"] = "<<j<<"\n";
        if(j==n-1){
            j=0;
        }else{
                j++;
        }
   
    } 
=======
#include <iostream>
using namespace std;
int main()
{
   unsigned long long int i, j, a[60], test, fibo;
    cin >> test;
    for (j = 1; j <= test; j++)
    {
        cin >> fibo;
        if (fibo == 0)
        {
          
            cout << "Fib (0) = 0"<<"\n";
        }

        else if (fibo == 1)
        {
           
             cout << "Fib (1) = 1"<<"\n";
        }

        else
        {
            for (i = 2; i <= fibo; i++)
            {
                a[0] = 0;
                a[1] = 1;
                a[i] = a[i - 1] + a[i - 2];
            }
            cout << "Fib (" << fibo << ") = " << a[fibo] << "\n";
        }
    }

    return 0;
>>>>>>> 1180f5ae8bed8c6767371b1488505d18812d5ad3
}