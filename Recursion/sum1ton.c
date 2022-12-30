#include<stdio.h>
int Summation(int i,int n){
    if(i>n) return 0;
    int s = Summation(i+1,n);
    return s+i;

}
int main(){
    int n;
    scanf("%d",&n);
    int s = Summation(1,n);
    printf("Summation : %d\n",s);
    return 0;
}