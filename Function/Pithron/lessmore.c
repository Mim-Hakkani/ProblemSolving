#include<stdio.h>
int main(){
    int test , a[100], searchValue,count=0;
    scanf("%d",&test);

    for(int i =0;i<test;i++){
        scanf("%d",&a[i]);
    }

  scanf("%d",&searchValue);
  
  for(int j=0;j<test;j++){
    if(a[j]!=searchValue){
        count++;
    }
  }
  printf("Less Or Grater Value is : %d\n",count);
  return 0;



}