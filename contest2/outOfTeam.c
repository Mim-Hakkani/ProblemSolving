#include <stdio.h>
int main()
{
    int n[100],player ,k, i, outPlayerCount = 0;
    scanf("%d %d", &player, &k);
    for (i = 0; i <player; i++)
    {

        scanf("%d", &n[i]);
        if (n[i] < k)
        {
            outPlayerCount++;
        }
    }
    printf("%d\n", outPlayerCount);

    return 0;
}