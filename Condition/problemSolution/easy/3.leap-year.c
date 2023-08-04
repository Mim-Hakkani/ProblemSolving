// problem Name : Write a program to check if a year is a leap year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the Year : ");
    scanf("%d", &year);
    if((year%4==0 || year%400==0) && year%100!=0) {
        printf("%d Leap Year",year);
        return 0;
    }
    else{
       printf("%d not Leap Year",year);
    }
  
  return 0;
}

/*
input :
Enter a number: 2024
Enter a number: 2000

output :

2024 Leap Year
2000 not Leap Year
 
*/