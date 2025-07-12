#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    float per;
};

int main() {
    struct student s[10];
    int i, n;

    printf("Enter number of students (max 10): ");
    scanf("%d", &n);

    if (n > 10 || n < 1) {
        printf("Invalid number of students.\n");
        return 1;
    }

    // Input student data
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].rollno);

        printf("Name: ");
        scanf("%s", s[i].name);  

        printf("Percentage: ");
        scanf("%f", &s[i].per);
    }

    // Display student data
    printf("\n--- Student Details ---\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Percentage: %.2f\n", s[i].per);
    }

    return 0;
}
