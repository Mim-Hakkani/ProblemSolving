#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i, hc = 0, tc = 0,length;
    scanf("%d", &n);

    // number of toss H or T

    for (i = 0; i < n; i++)
    {  
       
        scanf("%d",&length);

        char toss[length];
        scanf("%s",toss);
         
        int j = 0;
        while (toss[j] != '\0')
        {
            if (toss[j] == 'H')
            {
                hc++;
            }
            else if(toss[j] == 'T')

            {
                tc++;
            }

          j++;
        }
        if(hc>tc) {
          printf("England\n");
        } 
        else {
        printf("Pakistan\n");
        }

        // printf("%d",hc);

        // printf("%d",tc);

        hc = 0; 
        tc = 0;


      
    }
    return 0;
}
