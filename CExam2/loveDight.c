#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int loveDight(char digits[] ){
    int i = 0;
    int flag = 0, flag2 = 0, flag3 = 0;
    while (digits[i] != '\0')
    {
        if (digits[i] == '1')
        {
            flag = 1;
        }
        if (digits[i] == '7')
        {
            flag2 = 1;
        }
        if (digits[i] == '9')
        {
            flag3 = 1;
        }

        i++;
    }

    if (flag == 1 && flag2 == 1 && flag3 == 1)
        printf("yes\n");
    else
        printf("No\n");
}


int main()
{
    char digits[100];
    fgets(digits, sizeof(digits), stdin);
    
    // function call 
    loveDight(digits);

    return 0;
}