/*
4. Circle Area Calculation
Write a program to calculate the area of a circle. Take the radius as input and use the formula:

*/

#include<stdio.h>
#include<math.h>
#define PI 3.14156

int main(){
    float pi,radius,area;

    // rules 1 
        // pi = 3.14156;
        
        // printf("Enter the radious:");
        // scanf("%f",&radius);
        // area = pi * radius*radius;
        // printf("Area is : %0.2f",area);

      // rules 2 
        
        // printf("Enter the radious:");
        // scanf("%f",&radius);
        // area = PI * radius*radius;
        // printf("Area is : %0.2f",area);

        // rules 3
        
        printf("Enter the radious:");
        scanf("%f",&radius);
        area = PI * pow(radius,2);
        printf("Area is : %0.2f",area);


}