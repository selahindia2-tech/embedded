#include <stdio.h>
#include <string.h>

struct Address
{
    char city[30];
    char state[30];
    int pin;
};

struct Student
{
    int rollno;
    char name[30];
    float marks;
    struct Address addr;
};

int main()
{
    struct Student s[5];
    int i;

    // Read details of 5 students
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Name: ");
        scanf("%29s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        printf("Enter City: ");
        scanf("%29s", s[i].addr.city);

        printf("Enter State: ");
        scanf("%29s", s[i].addr.state);

        printf("Enter PIN Code: ");
        scanf("%d", &s[i].addr.pin);
    }

    // Display students from Hyderabad
    printf("\nStudents belonging to hyderabad:\n");

    for(i = 0; i < 5; i++)
    {
        if(strcmp(s[i].addr.city, "hyderabad") == 0)
        {
            printf("\nRoll Number: %d\n", s[i].rollno);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            printf("City: %s\n", s[i].addr.city);
            printf("State: %s\n", s[i].addr.state);
            printf("PIN Code: %d\n", s[i].addr.pin);
        }
    }

    return 0;
}
