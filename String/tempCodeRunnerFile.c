/*
 input name with space and show the output
*/
#include<stdio.h>
int main(){
     char name[100];
     printf("Input Your name : ");
    fgets(name,sizeof(name),stdin);
    printf("Your Name is : ");
    puts(name);

}