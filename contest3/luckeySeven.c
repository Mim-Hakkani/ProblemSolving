#include<stdio.h>
#include<string.h>
int main(){
    char name[20],name2[20];
    int test,j;
    scanf("%d",&test);

    int i=0,k;
    while (i<test)
    {
       scanf("%s",name);
       
        int length =strlen(name);

        int k = length-1;
        int p = 0;
            while (name[k]>='\0')
            {
               name2[p] = name[k];

                p++;
                k--;
            }
        
        int cmp = strcmp(name,name2);
       
        if(cmp==0){
           
             if(length>7){
              printf("Case #2: %c%d%c\n",name[0],length-2,name[length-1]);
            }
            else{

                printf("Case #3: %s\n",name);
            }
        }
        else{

            printf("Case #1: Not Palindrome\n");
           
        }
        
        i++;
    }
    
   
  
    return 0;
}



