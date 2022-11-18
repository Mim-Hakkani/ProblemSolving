#include<stdio.h>
int main(){
    char operator[20];
    int a,b,sum1=0;

    scanf("%s",operator);
    scanf("%d %d",&a,&b);
  
    int i =0;
    while (operator[i]!='\0')
    {
         switch (operator[i])
         {
         case '*':
              sum1 = sum1 + (a*b);
            break;

            case '+':
              sum1 = sum1 + (a+b);
            break;
         
         default:
            break;
         }
        
        i++;
    }
    printf("%lld\n",sum1);
    return 0;
    

}