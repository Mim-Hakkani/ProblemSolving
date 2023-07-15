/*
6. Write a program in C to compare two strings without using string library functions. 

Test Data :
Check the length of two strings:
--------------------------------
Input the 1st string : aabbcc
Input the 2nd string : abcdef
String1: aabbcc
String2: abcdef
Expected Output : Strings are not equal.

Check the length of two strings:
--------------------------------
Input the 1st string : aabbcc
Input the 2nd string : aabbcc
String1: aabbcc
String2: aabbcc
Expected Output : Strings are equal.

*/

#include <stdio.h>
#include <string.h>
int main()
{

    char stringData1[1000],stringData2[1000];
    int length1=0,length2=0;
    printf("Input the String 1: ");
    fgets(stringData1, sizeof(stringData1), stdin);

    printf("Input the String 2: ");
    fgets(stringData2, sizeof(stringData2), stdin);

    int i = 0;
    
    while (stringData1[i]!= '\0')
    {
      length1++;
       i++;
    }

    // calulate length 2 

    int j = 0;
    while (stringData2[j]!= '\0')
    {
      length2++;
       j++;
    }

    printf("%d",length1);
    printf("%d",length2);
    // printf("%s",stringData1);
    // printf("%s",stringData2);
        if(stringData1==stringData2){
        printf("String Are Equal");
      }
    
    //  compare length 
    if(length1==length2){
      if(stringData1==stringData2){
        printf("String Are Equal");
      }
      else{
          printf("%s",stringData1);
          printf("%s",stringData2);
        printf("String Are Not Equal");
      }
    }
    else{
        printf("String are not equal");
    }

   
    return 0;
}