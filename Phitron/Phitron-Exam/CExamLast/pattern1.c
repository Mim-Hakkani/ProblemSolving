#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=i;k<=i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            if(i%2==1){
                printf("^");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}