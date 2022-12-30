#include<stdio.h>
int main(){
    int i,j,arr[15],pair[15],impair[15],pairinit = 0,impairinit=0;
    for(i=0;i<15;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            pair[pairinit] = arr[i];
            pairinit++;
        }
        else{
            impair[impairinit] = arr[i];
            impairinit++;
        }
    }

    // print function pair

    for(i=0;i<5;i++){
        printf("par [%d] = %d\n",i,pair[i]);
    }

        // print function impair

    for(i=0;i<5;i++){
        printf("impar [%d] = %d\n",i,impair[i]);
    }

    // printf("imp = %d",impairinit);
    if(impairinit>4){
        int imprem = 0;
        for(i=5;i<impairinit;i++){
          printf("impar [%d] = %d\n",imprem,impair[i]);
          imprem++;
        }
    }

       if(pairinit>4){
        int iprem = 0;
        for(i=5;i<pairinit;i++){
          printf("par [%d] = %d\n",iprem,pair[i]);
          iprem++;
        }
    }
    // printf("pair = %d",pairinit);

}