#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b;
    float result;

    scanf("%d %d", &a, &b);

    result = (b / 12.0) * a;

    printf("%0.3f\n", result);

    return 0;
}