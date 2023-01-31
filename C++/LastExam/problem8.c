#include<stdio.h>
#include<string.h>
#define MAX 26
int main(){
   int n;
   scanf("%d",&n);
   char strings[MAX]; 
   int count[MAX] ={0};

   scanf("%s",strings);

   for(int i = 0 ;i<n;i++){
     int index = strings[i]-'a';
     count[index]++;

    // printf("%d ",count[index]);
   }

   // for unique code 
   int unic = 0;
   for(int i =0;i<MAX;i++){
    if(count[i]==1){
      unic++;
    }
   }

   printf("%d\n",unic);
       

}

