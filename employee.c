#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

struct employee
{
    int EmpID;
    char name[20];
    float salary;
    struct date joining;
};

int main()
{
    struct employee e[3];

    // Reading employee details
    for(int i = 0; i < 3; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter EmpID: ");
        scanf("%d", &e[i].EmpID);

        printf("Enter name: ");
        scanf("%19s", e[i].name);

        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);

        printf("Enter joining day: ");
        scanf("%d", &e[i].joining.day);

        printf("Enter joining month: ");
        scanf("%d", &e[i].joining.month);

        printf("Enter joining year: ");
        scanf("%d", &e[i].joining.year);
    }

    // Displaying employee details
    printf("\nEmployee Details\n");

    for(int i = 0; i < 3; i++)
    {
        printf("\nEmployee ID:%d\n", e[i].EmpID);
        printf("\nName:%s\n", e[i].name);
        printf("\nSalary: %f\n", e[i].salary);

        printf("Date of Joining:%02d/%02d/%04d\n",
               e[i].joining.day,
               e[i].joining.month,
               e[i].joining.year);

        printf("\n");
    }

    return 0;
}
