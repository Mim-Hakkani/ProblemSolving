/*
 check how many capital letter to small letter 
*/
#include<stdio.h>
int main(){
     char name[100];
     printf("Input small letter name : ");
     fgets(name,sizeof(name),stdin);
     int i;
     while (name[i]!='\0')
     { 
        if(name[i]==' '){
            printf(" ");
        }
        else{
         printf("%c",name[i]-32);
         
        }
        
        i++;
     }
     
  printf("\n");

}