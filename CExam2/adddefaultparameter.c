#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int add_three_nums(int a, int b, int c)
{
return a+b+c;
}


int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    int summation = add_three_nums(a,b,0);
    // if add three number but i have two input so that add a default paramerter as c argument .if add default parameter in c using in add_three_nums i have my output including two number input .

    printf("%d\n",summation);


    return 0;
}