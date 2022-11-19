/*

5. Write a program in C to count the total number of words in a string. 

Test Data :
Input the string : This is w3resource.com

Expected Output :

Total number of words in the string is : 3

*/

#include <stdio.h>
#include <string.h>
int main()
{

    char stringData[1000],count=1;
    printf("Input the String : ");
    fgets(stringData, sizeof(stringData), stdin);

    int i = 0;
    while (stringData[i]!= '\0')
    {
       if(stringData[i] ==' '){
          count++;
       }
       i++;
    }
    printf("Total number of words in the string is : %d",count);
   
    return 0;
}