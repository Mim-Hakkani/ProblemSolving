#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int time, remaining, result;
    scanf("%d", &time);

    // calculate for hour

    result = time / 3600;
    remaining = time - (result * 3600);
    printf("%d:", result);

    // calculate for minites

    result = remaining / 60;
    remaining = remaining - (result * 60);
    printf("%d:", result);

    // calculate for seconds
    printf("%d\n", remaining);

    return 0;
}