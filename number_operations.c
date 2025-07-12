#include <stdio.h>

// Function to print multiplication table
void table(int n)
{
    printf("\nMultiplication Table of %d:\n", n);
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

// Function to find and print factors
void factors(int n)
{
    printf("Factors of %d: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int z, e, m;

    // Input section
    printf("Enter number for table (z): ");
    scanf("%d", &z);

    printf("Enter number for factorial (e): ");
    scanf("%d", &e);

    printf("Enter number to find factors (m): ");
    scanf("%d", &m);

    printf("\n--- Results ---\n");
    table(z);
    factorial(e);
    factors(m);

    return 0;
}
