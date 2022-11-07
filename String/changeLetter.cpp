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
        if(name[i]>='a' && name[i]<='z'){
             name[i] = name[i]-32;
     
        }
        printf("%c",name[i]);  // its also working 
        
        i++;
     }

    //  printf("%s",name); its  working 
     
  printf("\n");

}