#include <iostream>
using namespace std;
int main()
{
    int Number;
    cout << "Enter The Range of Number: ";
    cin >> Number;
    for(int i=1;i<=Number;i++){
        if(i%3==0 || i%5==0){
            cout<<i<<" is Divisible\n";
        }
    }
    

    return 0;
}