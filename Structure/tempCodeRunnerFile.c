#include<stdio.h>
struct Student{
 int roll;
 float weight;
 char name;
};

int main(){
   struct Student s;
   s.roll = 150132;
   s.weight = 75.1;
   s.name='s';

   printf("Roll is : %d\n",s.roll);
   printf("Name is : %c\n",s.name);
   printf("Weight is : %0.2f\n",s.weight);

}