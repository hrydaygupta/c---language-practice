#include <stdio.h>

int main() {
    int num1, num2, choice;
    int sum, subtract, multiply, divide;
    int *ptr1, *ptr2;

    printf("Enter two integers:\n");
    printf("num1: ");
    scanf("%d", &num1);
    printf("num2: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    printf("\nChoose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            sum = *ptr1 + *ptr2;
            printf("Sum = %d\n", sum);
            break;

        case 2:
            subtract = *ptr1 - *ptr2;
            printf("Subtraction = %d\n", subtract);
            break;

        case 3:
            multiply = *ptr1 * *ptr2;
            printf("Multiplication = %d\n", multiply);
            break;

        case 4:
            if (*ptr2 != 0) {
                divide = *ptr1 / *ptr2;
                printf("Division = %d\n", divide);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice. Please enter 1 to 4.\n");
    }

    return 0;
}
