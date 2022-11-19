#include<stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&k);

    for(i=1;i<=k;i++){
        for(j=1;j<=k;j++){
            if(i==1 || j==k){
                printf("%d",j);
            }
            else if(i==k || j==1){
                printf("%d",i);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}