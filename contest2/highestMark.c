#include <stdio.h>
int main()
{
    int i, j, n, marks[100];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &marks[i - 1]);
    }

    int heighest = marks[0];

    for (i = 1; i < n; i++)
    {
        if (marks[i] > heighest)
        {
            heighest = marks[i];
        }
    }

    // compare the highest 

       for (i = 0; i <n; i++)
    {
        
        printf("%d ",heighest-marks[i]);
    }


    return 0;
}