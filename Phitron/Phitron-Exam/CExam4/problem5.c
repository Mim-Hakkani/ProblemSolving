/*
 
 calloc and malloc are used in dynamic memory allocation . it works in run time . 
 Difference : 
 
 1. malloc has one parameter and element is product by its type size  otherwise calloc has two parameter one is it's element and other is it's type size.
 2. In calloc its gerbase value is converted by zero other malloc is not 

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    // i think always using pointer with type casting
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int)); // dynamically allocate function

    // input the array

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    // output

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    // after execution memory is free to ptr pointer adddress

    free(ptr);

    printf("\n");
}