#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    double marks;
};

void StudentDetails(int i, struct Student s)
{

    printf("The Information of The Students is : %d\n", i + 1);
    printf("Name => %s\n", s.name);
    printf("Roll => %d\n", s.roll);
    printf("Name => %lf\n", s.marks);
}

int main()
{

    struct Student s[5];

    // get the input

    for (int i = 0; i < 5; i++)
    {
        
        scanf("%s\n", s[i].name);
        scanf("%d\n", &s[i].roll);
        scanf("%lf\n", &s[i].marks);
    }

    // print the Students info

    for (int i = 0; i < 5; i++)
    {

        // print student info using function

        StudentDetails(i, s[i]);
    }

    return 0;
}