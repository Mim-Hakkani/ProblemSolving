#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int time,remaining,result;
    scanf("%d",&time);
    result = time/3600;
    remaining = time -(result*3600);
    printf("%d:",result);

    result = remaining/60;
    remaining = remaining -(result*60);
    printf("%d:",result);
    printf("%d\n",remaining);




    return 0;
}