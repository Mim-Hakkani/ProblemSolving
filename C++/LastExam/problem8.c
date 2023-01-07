// #include<stdio.h>
// #include<string.h>
// // #define MAX 26
// int main(){
//    int n;
//    scanf("%d",&n);
//    char strings[MAX]; 
//    int count[MAX] ={0};

//    scanf("%s",strings);

//    for(int i = 0 ;i<n;i++){
//      int index = strings[i]-'a';
//      count[index]++;

//     // printf("%d ",count[index]);
//    }

//    // for unique code 
//    int unic = 0;
//    for(int i =0;i<MAX;i++){
//     if(count[i]==1){
//       unic++;
//     }
//    }

//    printf("%d\n",unic);
       

// }

#include <stdio.h>
#include <string.h>

int countUnique(char* str)
{
  int len = strlen(str);
  int count = 0;

  for (int i = 0; i < len; i++) {
    int unique = 1;
    for (int j = i+1; j < len; j++) {
      if (str[i] == str[j]) {
        unique = 0;
        break;
      }
    }
    if (unique) {
      count++;
    }
  }

  return count;
}

int main()
{
 
  int n;
  scanf("%d",&n);
   char str[n];
   scanf("%s",str);
    int count = countUnique(str);
    printf("%d\n", count);
  
   // Outputs 5
  return 0;
}