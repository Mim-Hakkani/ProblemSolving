#include<stdio.h>
struct Student {
    double marks;
    int roll;
    char name[50];
};

int main(){
   
   struct Student s[5];

   // get the input 

   for (int i = 0; i < 5; i++)
   {
      scanf("%d\n",&s[i].roll);
      scanf("%s\n",s[i].name);
      scanf("%lf\n",&s[i].marks);
      
   }


   // print the Students info 

    for (int i = 0; i < 5; i++)
    {
        printf("The Information of The Students is : %d\n",i+1);
        printf("Name => %s\n",s[i].name);
        printf("Roll => %d\n",s[i].roll);
        printf("Name => %lf\n",s[i].marks);
    }
    
   

    return 0;
}