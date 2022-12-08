#include <stdio.h>
int main()
{
    int a, b, c, match = 0, win = 0, lost = 0, draw = 0;
    while (1)
    {
        scanf("%d %d", &a, &b);

        if (a > b)
        {
            win++;
        }
        if (a == b)
        {
            draw++;
        }
        if (a < b)
        {
            lost++;
        }
        match++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &c);

        if (c == 1)
        {
            continue;
        }
        if (c == 2)
            break;
    }

    printf("%d grenais\n", match);
    printf("Inter:%d\n", win);
    printf("Gremio:%d\n", lost);
    printf("Empates:%d\n", draw);
    if (win > lost)
        printf("Inter venceu mais\n");
    else if (lost > win)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");

    return 0;
}