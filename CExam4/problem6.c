/*
What is a function? Types of user-defined functions explain with proper examples. What are the benefits of using user-defined functions? 

What is a function: A function is a block of code that performs a specific task.Every C program has at least one function, which is main().There are two types of function userdefine and standard libreary function .

userDefine function : 
user define function is  create when  functions as per user need. Such functions created by the user are known as user-defined functions.

Advantages of user-defined function: 
1.The program will be easier to understand, maintain and debug.
2.Reusable codes that can be used in other programs
3.A large program can be divided into smaller modules. Hence, a large project can be divided among many programmers.




*/


#include<stdio.h>

// function prototype 

int addition();

int main()
{
    int result;

    // call the main function 
    result = addition();
    printf("%d",result*2);
    return 0;
}

// user define function 

int addition()
{
    int num1 = 10, num2 = 5;
    return num1+num2;
}



