#include <stdio.h>

// Function to calculate square
void square(int n)
{
    int s = n * n;
    printf("Square of %d = %d\n", n, s);
}

// Function to calculate cube
void cube(int n)
{
    int c = n * n * n;
    printf("Cube of %d = %d\n", n, c);
}

// Function to print multiplication table
void table(int n)
{
    printf("Multiplication Table of %d:\n", n);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
}

// Function to calculate factorial
void factorial(int n)
{
    int f = 1;
    for (int i = n; i >= 1; i--)
        f *= i;

    printf("Factorial of %d = %d\n", n, f);
}

int main()
{
    int a, b, z, e;

    // Input section
    printf("Enter a for square: ");
    scanf("%d", &a);

    printf("Enter b for cube: ");
    scanf("%d", &b);

    printf("Enter z for table: ");
    scanf("%d", &z);

    printf("Enter e for factorial: ");
    scanf("%d", &e);

    // Function calls
    printf("\n--- Results ---\n");
    square(a);
    cube(b);
    table(z);
    factorial(e);

    return 0;
}
