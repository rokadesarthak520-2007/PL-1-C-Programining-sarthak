
#include <stdio.h>

// Define a structure named Employee
struct Employee
{
    int emp_id;
    char name[50];
    float salary;
};

int main()
{
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Declare an array of structures
    struct Employee emp[n];

    // Accept employee details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d:\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].emp_id);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter Employee Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display stored employee details
    printf("\n========== Employee Details ==========\n");

    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d:\n", i + 1);

        printf("Employee ID: %d\n", emp[i].emp_id);
        printf("Employee Name: %s\n", emp[i].name);
        printf("Employee Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}
