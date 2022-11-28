#include <stdio.h>
int main()
{
    int i, N, X, count = 0, count1 = 0;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        scanf("%d", &X);
        if (X > 0 && X <= 20)
        {
            if (X >= 10 && X <= 20)
            {
                count++;
            }
        }
        if (X < 0 || X > 20)
        {
            count1++;
        }
    }
    printf("%d in\n", count);
    printf("%d out\n", count1);
}
