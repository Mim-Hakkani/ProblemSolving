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


   struct Student s1;

   scanf("%d %c %f",&s1.roll,&s1.name,&s1.weight);
   printf("Student 1 Result is :: \n");
   
   printf("Roll is : %d\n",s1.roll);
   printf("Name is : %c\n",s1.name);
   printf("Weight is : %0.2f\n",s1.weight);

    struct Student s2 = {.name='r',.roll=12,.weight=5.5};
   printf("Student 2 Result is :: \n");
   
   printf("Roll is : %d\n",s2.roll);
   printf("Name is : %c\n",s2.name);
   printf("Weight is : %0.2f\n",s2.weight);

}