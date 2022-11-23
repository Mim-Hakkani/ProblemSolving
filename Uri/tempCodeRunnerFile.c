#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int num,hour;
    double salary,totalSalary;
    scanf("%d %d %lf",&num,&hour,&salary);
    printf("NUMBER = %d\n",num);
    totalSalary = (float) hour * salary;
    printf("SALARY = U$ %0.2lf\n",totalSalary);
    return 0;
}