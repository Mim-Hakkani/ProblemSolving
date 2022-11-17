#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x, y, required;
    scanf("%d %d", &x, &y);
    required = x - y;
    printf("%d\n", required);
    return 0;
}
