/*

*/

#include<stdio.h>
#include<string.h>

void InitialString(char name[]){
//   printf("Output is : ");
// puts(name);

int stringLength = strlen(name);

// printf("Before Sort : ");

//  for (int i = 0; i <stringLength; i++)
//  {
//     printf("%c",name[i]);
//  }


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