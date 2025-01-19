/*
 5. Celsius to Fahrenheit
Write a program to convert temperature from Celsius to Fahrenheit using the formula:

c/5 = f-32 /9

c = (f-32 * 5) / 9
*/

#include<stdio.h>
int main(){
    float fer,cel;
    printf("Enter ferhanight temp : ");
    scanf("%f",&fer);
    cel = ((fer-32)*5) /9;
    printf("Enter Celcious is : %0.4f",cel);
    return 0;
}