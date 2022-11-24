#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int days,remaining,result;
    scanf("%d",&days);
    
    // calculate for hour 

    result = days/365;
    remaining = days -(result*365);
    printf("%d ano(s)\n",result);

    // calculate for minites 

    result = remaining/30;
    remaining = remaining -(result*30);
    printf("%d mes(es)\n",result);

    // calculate for seconds 
    printf("%d dia(s)\n",remaining);




    return 0;
}