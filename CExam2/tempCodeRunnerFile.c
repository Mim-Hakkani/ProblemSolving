#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int add_three_nums(int a, int b, int c=0)
{
return a+b+c;
}


int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int summation = add_three_nums(a,b);

    printf("%d\n",summation);


    return 0;
}