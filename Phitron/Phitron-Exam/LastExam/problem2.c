#include<stdio.h>

void bubble_sortAccending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n],diff[n];

    // input from a 
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i-1]);
    }
    
    // input from b 
    for(int i=1;i<=n;i++){
        scanf("%d",&b[i-1]);
    }

    // sort assending order 

    bubble_sortAccending(a,n);

      for(int i=1;i<=n;i++){
        // printf("%d",a[i-1]);
    }

    // printf("For decending order : ");
    bubble_sortAccending(b,n);
       for(int i=n;i>=1;i--){
        // printf("%d",b[i-1]);
    }

    // Difference between two array

    for(int i=0;i<n;i++){
        diff[i]=a[i]-b[n-i-1];
    }

    // show the output 

      for(int i=0;i<n;i++){
        printf("%d ",diff[i]);
    }


 
}