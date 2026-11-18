#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    struct Student s[5];

    int i, max = 0;

    // Reading student details
    for (int i = 0; i < 5; i++)
    {
        printf("Enter details of student %d\n", i + 1);

        printf("Enter roll no: ");
        scanf("%d", &s[i].rollno);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Displaying student details
    printf("\n Student Details \n");

    for (int i = 0; i < 5; i++)
    {
        printf("\n Roll number:%d", s[i].rollno);
        printf("\n Name:%s", s[i].name);
        printf("\n Marks:%.2f", s[i].marks);
    }

    // Finding highest marks
    for (int i = 0; i < 5; i++)
    {
        if (s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    // Displaying highest marks scored student
    printf("\n Highest Marks Scored Student \n");
    printf("Topper name:%s", s[max].name);

    return 0;
}
