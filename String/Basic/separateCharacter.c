/*
3. Write a program in C to separate the individual characters from a string. 

Test Data :
Input the string : w3resource.com

Expected Output :

The characters of the string are : 
w  3  r  e  s  o  u  r  c  e  .  c  o  m 
*/

#include <stdio.h>
#include <string.h>
int main()
{

    char stringData[1000];
    printf("Input the String : ");
    fgets(stringData, sizeof(stringData), stdin);
   

    int i = 0;
    while (stringData[i] != '\0')
    {
        printf("%c ", stringData[i]);
        i++;
    }
   
    return 0;
}