#include <stdio.h>
int main()
{
    int arr[100][100], row, col, i, j;
    scanf("%d %d", &row, &col);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            scanf("%d", &arr[i-1][j-1]);
        }
    }

 for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            
                if(i==j && arr[i-1][j-1] ==i){
                    arr[i-1][j-1] =  arr[i-1][j-1] +3 ;
                }
                else if(arr[i-1][j-1] ==i ){
                     arr[i-1][j-1] =  arr[i-1][j-1] +2;
                }
                else if(arr[i-1][j-1] ==j){
                     arr[i-1][j-1] =  arr[i-1][j-1] +1;
                }
               
            
        }
    }


    // printf("Matrix shown : \n");

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            printf("%d ", arr[i-1][j-1]);
        }
        printf("\n");
    }
}