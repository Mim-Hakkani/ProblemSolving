#include <stdio.h>
int main()
{
    int n;
    scanf("%d\n", &n);
    int arr[n-1], i;
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d ", &arr[i]);
    }

    int low = arr[0];
    int pos;
    for (int j = 1; j < n-1; j++)
    {
        if (low > arr[j])
        {
            low = arr[j];
            pos = j;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", low, pos);

    return 0;
}