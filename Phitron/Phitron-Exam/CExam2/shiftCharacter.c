#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, i = 0;
    char names[100];
    scanf("%s %d", names, &a);

    while (names[i] != '\0')
    {
        if (names[i] >= 'a' && names[i] <= 'z')
        {
            if (names[i] + a > 122)
            {
                printf("%c", names[i] +a+97 - 123);
            }
            else
            {
                printf("%c", names[i] + a);
            }
        }
        i++;
    }

    return 0;
}