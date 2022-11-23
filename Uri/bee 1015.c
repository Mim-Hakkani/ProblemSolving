#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    double a,b,c,d,result;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    result = sqrt(pow((c-a),2)+pow((d-b),2));
    printf("%0.4lf\n",result);


    return 0;
}