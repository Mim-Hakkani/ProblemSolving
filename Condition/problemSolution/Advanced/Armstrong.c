 #include<stdio.h>
 #include<math.h>
int main(){
    int number,sum=0;
    scanf("%d",&number);
    int num = number;
    while (number>0)
    {
        sum =  sum+pow(number%10,3);
        number=number/10;

    }
    if(sum==num){
        printf("Armstrong");
    }
    else{
        printf("Not Amstrong");
    }
    
  
    return 0;
}