#include <stdio.h>
int main()
{
    int i, n, arr[21],arr2[21], k;
    scanf("%d", &n);
    if (n >= 1 && n <= 20)
    {
        for (i = 0; i < n; i++)
        {
           
          scanf("%d", &arr[i]);
          if(arr[i]>=1 && arr[i]<=20){
            arr2[i] = arr[i];
          }

           
        }
    

        scanf("%d",&k);


        if (k != 0)
        {
            for (i = k; i <= n; i++)
            {
                printf("%d ", arr2[i]);
                if (i + 1 == n)
                {
                    for (i = 0; i <= k - 1; i++)
                    {
                        printf("%d ", arr2[i]);
                    }
                     printf("\n");
                    break;
                }
            }
        }
        else{
        for (i = 0; i < n; i++)
        {

            printf("%d ", arr2[i]);
        }
        printf("\n");
        }

     }
     return 0;
}