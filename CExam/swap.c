/*
problem name : Update the following code such that it swaps the contents of two two variables. You can only write code inside the two comments. Do not modify anything else. The printf function is supposed to print “13 and 5”. So basically the value must be swapped but you can not assign 13 directly to a and 5 directly to b. You can not use other numbers as well. But you can declare an extra variable if you need.



input :

int a=5, b=13;
//Write code here
//End of code
printf(“%d and %d” , a, b);

output :

*/

#include <stdio.h>
int main()
{
    int a = 5, b = 13;
    // Write code here

    int swap;

    swap = b; // 13
    b = a;    // 5
    a = swap;  // 13
    printf("% d and % d", a, b);  // 13,5
    // End of code
}