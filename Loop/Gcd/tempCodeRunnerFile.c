#include <stdio.h>
// calculate gcd function

int GcdCalculator(int first,int second){
  while (first!=second)
  {
    if(first>second) first-=second;
    else second-=first;
  }
  return first;
  
}

int main()
{
    int n, inp, j, k,gcd,count ;
    scanf("%d", &n); // number of test case
    for (int i = 1; i <= n; i++)
    {
        int test;
        // printf("test input \n");
        scanf("%d", &test);
        int arr[test];
        // for intput
        // printf("Input number : \n");
        for (inp = 0; inp < test; inp++)
        {
            scanf("%d", &arr[inp]);
        }

        for (j = 0; j < test; j++)
        {
            for (k = 0; k < test; k++)
            {
                if (j != k)
                {
                    // printf("j = %d k = %d\n", arr[j], arr[k]);
                    gcd = GcdCalculator(arr[j], arr[k]);
                    if(gcd ==1){
                        count++;
                    }
                }
            }
        
        }
        printf("%d",count);
        count = 0;

        
    }
    return 0;
}