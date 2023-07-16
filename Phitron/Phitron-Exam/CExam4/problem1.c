/*
 Ternary operator : Ternary operator in C is also known as the Conditional Operator. It is a way to shorten the simple if-else code of the block.It works two conditions true or false .
*/

#include <stdio.h>
int main()
{

    int a = 15, b = 10;
    //ternary operator 
    a > b ? printf("Max=%d\n", a) : printf("Max=%d\n", b);
    return 0;
}


/*
 Write down the differences between local and global variables. 
*/

// Local Variable vs Global variable : 
//  1. It can be used everywere and it can be access anywhere But Global variable works only block scope .it can be access outside of the block.
//  2. Local variable is declared inside the functions but global variable is declare outside the function.
//  3. global variable is destroyed when the program is terminated but local variable is destroyed when function returns .