/*
Vanya and his friends are walking along the fence of height h and they do not want the guard to notice them. In order to achieve this the height of each of the friends should not exceed h. If the height of some person is greater than h he can bend down and then he surely won't be noticed by the guard. The height of the i-th person is equal to ai.

Consider the width of the person walking as usual to be equal to 1, while the width of the bent person is equal to 2. Friends want to talk to each other while walking, so they would like to walk in a single row. What is the minimum width of the road, such that friends can walk in a row and remain unattended by the guard?

Input
The first line of the input contains an integer x (1 ≤ x ≤ 1 000 000) — The coordinate of the friend's house.

Output
Print the minimum number of steps that elephant needs to make to get from point 0 to point x.

Examples
3 7
4 5 14
outputCopy
4

inputCopy
6 1
1 1 1 1 1 1
outputCopy
6

inputCopy
6 5
7 6 8 9 10 5
outputCopy
11

*/

#include<iostream>
using namespace std;
int main(){
    int friends,fenchHeight,friendsHeight,min=0,max=0,total;
    cin>>friends>>fenchHeight;
    
    for(int i=1;i<=friends;i++){
        cin>>friendsHeight;

        if(fenchHeight>=friendsHeight){
           min++;
        }
        else{
            max++;
        }

    }
         total = min + max*2;
         cout<<total<<"\n";
   


    return 0;
}