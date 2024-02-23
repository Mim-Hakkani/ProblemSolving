#include<iostream>
using namespace std;

int summation(int pp){
    int sum=0;
    for(int i=1;i<=pp;i++){
        sum+=i;
        if(i>9){
            i=1;
        }

    }
    return sum; // Return pp
}

int main() {
    int n, num;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> num;
        int ans = summation(num);
        cout<<ans;
    }

    return 0;
}
