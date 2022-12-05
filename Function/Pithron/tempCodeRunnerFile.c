#include<stdio.h>

// input for test case 

void inputTest(int test,int a[]){

 for(int i =0;i<test;i++){
        scanf("%d",&a[i]);
    }

}


// void grater more or less value 

int greaterMoreLess(int test , int searchValue, int a[]){
    int count=0 ;

  for(int j=0;j<test;j++){
    if(a[j]!=searchValue){
        count++;
    }
  }

  return count;
}

int main(){
    int test , a[100], searchValue;
    scanf("%d",&test);

   // function for input number 
    inputTest(test,a);

  scanf("%d",&searchValue);


//   greaterMore or Less 

  int counter = greaterMoreLess(test,searchValue,a);
  

  printf("Less Or Grater Value is : %d\n",counter);
  return 0;



}