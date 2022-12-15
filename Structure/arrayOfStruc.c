#include<stdio.h>
struct student
{
    float weight;
    int roll;
    
};

int main(){
    struct  student s[2];

     s[0].roll=15;
     s[1].roll=20;
     s[0].weight = 36.2;
     s[1].weight = 76;

     for(int i = 0; i<2;i++){
        printf("roll : %d weight : %f \n",s[i].roll,s[i].weight);
     }
}