/* 
what is structure : Structure is a user-defined datatype in C language which allows us to combine data of different types together. It is used to bind two or more similar or different data types or data structures together into a single type

such as : 

struct Person {
    char name[10];
    int age;
    float height;
}


why to use it : when we need to different type of information in a single type then we need structure . such as the above example we need person name,age , and weight at a time or 100 persons data is need or stored at a time then we need to structure . it is simmilar as array but difference is in array we need one type at a time but using structure we get multiple type of elements at a time . 


2. There are three ways to access structure member 
    1. using (dot . ) operator to access structure member
       
       struct person {
          int  age;
       }

       access it in main function : 

       {
           struct person = {50}
           printf("%d")
       }

    2. using arrow sign when using pointer variable value 

            struct person{
            int age;
        };

        int main(){

            struct person P={50};
            struct person *ptr;

            ptr = &P;
            printf("age is : %d",ptr->age);

        }

        3 . the third option is using array and value access is dot operator . 



*/


#include<stdio.h>
struct Student {
    char name[30];
    int roll;
    int mark;
};

int main(){
  
  struct Student s;
  

printf("Enter information: \n");
printf("Enter name: ");
  scanf("%s",s.name);
printf("Enter roll number: ");
 scanf("%d",&s.roll);
printf("Enter Mark:");
 scanf("%d",&s.mark);



// print the output 

printf("\n\n");
printf(" Displaying Information: \n");
printf("Name: %s\n",s.name);
printf("Roll number: %d\n",s.roll);
printf("Marks: %d\n",s.mark);

    return 0;
}