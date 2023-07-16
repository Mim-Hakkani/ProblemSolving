#include<stdio.h>
int main(){
    char n[1000];
    int test,i,number;

    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d",&number);
        scanf("%s",n);

        //  printf("%s\n",n);

        int j =0,count=0;

        while(n[j]!='\0'){
          if(n[j+1]!=n[j]){
            count++;
          }
          j++;
        }

        printf("%d\n",count-1);
        count=0;
    }
}