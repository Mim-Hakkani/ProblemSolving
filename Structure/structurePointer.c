#include<stdio.h>
struct Student
{
   double weight ;
   int roll;
};

int main(){
    struct Student s1 = {.roll = 12, .weight = 15.25};   
    printf("Student 1 info is :: %d\n",s1.roll );

    struct Student *spt;

    spt = &s1;
    printf("Address is : %p \n",spt);

    // show the structure pointer 

    printf("Roll is : %d  \nWeight is : %f\n",spt->roll,spt->weight);
    

    return 0;
    
}
