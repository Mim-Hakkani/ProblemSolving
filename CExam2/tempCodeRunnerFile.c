#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char studentGrade(int grade){
   if(grade>=0 && grade<=39){
    return 'F';
   }
  else if(grade>39 && grade<=59){
    return 'C';
   }

     else if(grade>59 && grade<=79){
    return 'B';
   }

    else if (grade>=80 && grade<=100){
    return 'A';
   }


}
int main(){
    int grade;
    scanf("%d",&grade);
    char gd = studentGrade(grade);

    printf("%c\n",gd);


    return 0;
}