#include<stdio.h>
int main(){
    int test,np,nrun[11],count=0,newarr[11],i,j,k;
    scanf("%d",&test); // test case 
    for(i=1;i<=test;i++){
        scanf("%d",&np); // number of players 

        for(j=1;j<=np;j++){
            scanf("%d",&nrun[j-1]); // players run


            if(nrun[j-1] >=80 && nrun[j-1]<100){
                 count++;
                 if(newarr[count-1] != nrun[j-1]) {
                    newarr[count-1] = nrun[j-1];
                 }
                // printf("%d",count);
                // printf("mim = %d\n",nrun[j-1]);
                // printf("new = %d\n",newarr[count-1]);

            }


        }


           // for output 
     
     
     for(k=0;k<count;k++){
       printf("%d\n",newarr[k]);

     }



    }


 return 0;
}