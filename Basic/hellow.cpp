/*
proble Name : Show Hellow World 
*/

#include<stdio.h>
#include<string.h>

using namespace std;
int main (){
    int t, i, n;
    cin>>t;
    
    while (t--)
    {
        cin>>n;
        string isprime = "Yes";
        
        
        if(n==1) isprime = "No";
        else{
            for(i=2;i*i<=n;i++){
                if(n%i==0){
                    isprime = "No";
                    break;
                }
            }
        }
        cout<<isprime<<endl;



    }
    


    return 0;
}