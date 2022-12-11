/*
Problem Statement:
Your keyboard is worn out after playing games for a long time. Now when you press the keys of the keyboard, the first character you press is pressed once, then the key you press is pressed twice, then the third character will be pressed once again, and the fourth character will be pressed twice and so on. Implement it using function.

See the sample input-output for more clarification.

Sample Input-
-----------------------
abcd

Sample Output-
-----------------------
abbcdd

*/


#include<stdio.h>
#include<string.h>
int main(){
    char name[100],name2[100];
    int i,count=0;
    fgets(name,sizeof(name),stdin);

    while (name[i]!='\0')
    {
        count++;
        if(count%2==0){        
         printf("%c%c",name[i],name[i]);
        }
        else{
          
            printf("%c",name[i]);
           
        }
        
        i++;
    }


    
}