#include <stdio.h>
int main(){
    int a,b,c,greatest;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&& a>c){
        printf("%d eh o maior\n",a);
    }
    else if(c>b&& c>a){
        printf("%d eh o maior\n",c);
    }
    else{
        printf("%d eh o maior\n",b);
        
    }


    return 0;
}