#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    int remain_passenger = b[0] - a[0];
    c[0] = remain_passenger;

    for (int i = 1; i < n; i++) {
        int passenger = (remain_passenger - a[i]) + b[i];
        remain_passenger = passenger;
        c[i] = remain_passenger;
    }

    // Use size() function to get the size of the vector
    int length = c.size();
    cout<<*max_element(c.begin(), c.end());



    return 0;
}


/* other code 

#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    int minCapacity = 0;
    int currentCapacity = 0;
 
    for (int i = 0; i < n; i++) {
        int exiting, entering;
        scanf("%d %d", &exiting, &entering);
 
        currentCapacity = currentCapacity - exiting + entering;
 
        if (currentCapacity > minCapacity) {
            minCapacity = currentCapacity;
        }
    }
 
    printf("%d\n", minCapacity);
 
    return 0;
}

*/