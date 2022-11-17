/*
4. Write a program in C to print individual characters of string in reverse order. 

Test Data :
Input the string : w3resource.com

Expected Output :

The characters of the string in reverse are :
m  o  c  .  e  c  r  u  o  s  e  r  3  w 
*/

#include <stdio.h>
#include <string.h>
int main()
{

    char stringData[1000],length;
    printf("Input the String : ");
    fgets(stringData, sizeof(stringData), stdin);
    length = (strlen(stringData)-1);
    printf("%d",length);
   

    int i = length;
    while (stringData[i]>= 1)
    {
        printf("%c", stringData[i]);
        i--;
    }
   
    return 0;
}