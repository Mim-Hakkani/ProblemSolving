#include<stdio.h>
int solve(int arr[],int i,int n){
    if(i==n) return 0;
  int s = solve(arr,i+1,n);
  return arr[i]+s;
}

int main(){
    int n,i,s;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    s = solve(arr,0,n);
    printf("%d\n",s);
    return 0;
}