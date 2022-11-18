#include<stdio.h>
int main(){
    char operator[20];
    long long int a,b,sum1=0,sum2=0;

    fgets(operator,sizeof(operator),stdin);
    scanf("%lld %lld",&a,&b);
  

    

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