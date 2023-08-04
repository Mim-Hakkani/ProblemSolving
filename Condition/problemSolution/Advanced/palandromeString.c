// 121 is the palandrome 

#include<stdio.h>
#include<string.h>
int main(){
    char name[100],reverse[100];
    int flag=0,i;
    printf("Enter Name : ");
    scanf("%s",name);
    int length = strlen(name);
    for(i=length-1;i>=0;i--){
        reverse[flag]=name[i];
        
        flag++;
    }
   reverse[flag] = '\0';
//   printf("Reverse : %s", reverse);
//   printf("Reverse : %s", name);
if(strcmp(name, reverse) == 0){
    printf("Palandrome Number ");
}
else{
    printf("Not Palandrome");
}


    // 142 in reverse 241 
    return 0;
}