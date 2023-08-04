// problem Name : Write a program to check if a character is a vowel or a consonant
#include <stdio.h>
int main()
{
    char letter;
    printf("Enter Letter : ");
    scanf("%c", &letter);
    if(letter =='a' || letter =='e' || letter =='i' || letter =='o' || letter =='u'){
        printf("This is Vowel\n");
    }
    else{
        printf("This is Consonent \n");
        
    }

    return 0;
}

/*
input :
Enter a 

output :

THis is vowel 
*/