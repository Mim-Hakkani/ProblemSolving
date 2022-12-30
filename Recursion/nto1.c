#include<stdio.h>
void Solve(int n){
  if(n==0) return;
  printf("%d ",n);
  Solve(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    Solve(n);
    printf("\n");
    return 0;
}