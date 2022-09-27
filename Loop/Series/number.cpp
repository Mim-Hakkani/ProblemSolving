/*
1+2+4+7+11+...+n
*/

#include<bits/stdc++.h>
using namespace std;
int main (){

  int i,sum_int=0;

   int j = 1;
    for (i = 1; j <= 10; i++) {
      sum_int += j * j * j * j;
      j += i;
      cout<<j<<" ";
    }
    return 0;
}