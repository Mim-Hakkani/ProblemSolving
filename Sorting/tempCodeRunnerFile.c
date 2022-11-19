#include<stdio.h>
int main(){
    int i,temp,p,j,num[11] ={12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    // printf("%d",num[0]);

    for(i=0;i<9;i++){
        for(j=0;j<11;j++){
            if(num[j]>num[j+1]){
            temp = num[j];
            num[j] = num[j+1];
            num[j+1] = temp;  
            }
             
        }
    
        
            
    }

// print sorted value 
    for(p=0;p<11;p++){
        printf("%d ",num[p]);
    }

    printf("\n");
}

/*
 7 9 1 3 12 11 15 62 19 4 73 
 7 1 3 9 11 12 15 19 4 62 73
 1 3 7 9 11 12 15 4 19 62 73
 1 3 7 9 11 12 4 15 19 62 73 
 1 3 7 9 11 4 12 15 19 62 73 



*/