#include <stdio.h>

struct salary {
    char name[100];
    int id;
    float salary;
};

int main() {
    struct salary s[10];
    int i, n, maxIndex = 0, minIndex = 0;
    float maxSalary, minSalary;

    printf("Enter number of employees (max 10): ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Invalid number of employees.\n");
        return 1;
    }

    // Input employee data
    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Employee ID: ");
        scanf("%d", &s[i].id);

        printf("Salary: ");
        scanf("%f", &s[i].salary);
    }

    maxSalary = s[0].salary;
    minSalary = s[0].salary;

    // Find max and min salary
    for (i = 1; i < n; i++) {
        if (s[i].salary > maxSalary) {
            maxSalary = s[i].salary;
            maxIndex = i;
        }
        if (s[i].salary < minSalary) {
            minSalary = s[i].salary;
            minIndex = i;
        }
    }

    // Output
    printf("\n--- Employee with Maximum Salary ---\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Employee ID: %d\n", s[maxIndex].id);
    printf("Salary: %.2f\n", s[maxIndex].salary);

    printf("\n--- Employee with Minimum Salary ---\n");
    printf("Name: %s\n", s[minIndex].name);
    printf("Employee ID: %d\n", s[minIndex].id);
    printf("Salary: %.2f\n", s[minIndex].salary);

    return 0;
}
