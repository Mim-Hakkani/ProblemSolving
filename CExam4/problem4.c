/*
  1. declare the characte of geting input 
  2. get input usinf f gets and call the fuction initialString
  3. calculte the length of the whole string 
  4. sort the character using bubble sort in accending Order 
  5. show the output of the string in assending order 
  6. finished
*/

#include<stdio.h>
#include<string.h>

void InitialString(char name[]){

int stringLength = strlen(name);
char temp;
for(int i=0;i<stringLength;i++){
    for(int j=0;j<stringLength-1;j++){
        if(name[j]>name[j+1]){
            temp=name[j];
            name[j]=name[j+1];
            name[j+1]=temp;

        }
    }
}
 
 // show the output 

//  printf("\nafter sort : ");

 for (int i = 0; i <stringLength; i++)
 {
    printf("%c",name[i]);
 }
 

}

int main(){
    char name[100];
    fgets(name,sizeof(name),stdin);
    InitialString(name);
return 0;
}