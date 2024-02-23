#include<iostream>
#include<cmath> // Include the <cmath> header for ceil function
using namespace std;

int main() {
   double m, n, o, column_wise_flatsome, row_wise_flatsome;
    cin >> m >> n >> o;
    column_wise_flatsome = ceil(m / o);
    row_wise_flatsome = ceil(n / o);
    cout << (long long) (column_wise_flatsome * row_wise_flatsome); // Output the product

  
    return 0;
}
