#include <stdio.h>

// Recursive function to calculate factorial
int fact(int n) {
    if (n == 0)
        return 1;
    else 
        return n * fact(n - 1);
}

// Recursive function to get nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else 
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Recursive function to calculate sum of natural numbers up to n
int sum(int n) {
    if (n == 0)
        return 0;
    else 
        return n + sum(n - 1);
}

// Recursive function to reverse a number
int reverse(int n, int rev) {
    if (n == 0)
        return rev;
    else
        return reverse(n / 10, rev * 10 + n % 10);
}

int main() {
    int q, z, w, r;

    printf("Enter number for factorial (q): ");
    scanf("%d", &q);

    printf("Enter position for Fibonacci (z): ");
    scanf("%d", &z);

    printf("Enter number for sum of natural numbers (w): ");
    scanf("%d", &w);

    printf("Enter number to reverse (r): ");
    scanf("%d", &r);

    printf("\n--- Results ---\n");
    printf("Factorial of %d = %d\n", q, fact(q));
    printf("Fibonacci number at position %d = %d\n", z, fibonacci(z));
    printf("Sum of first %d natural numbers = %d\n", w, sum(w));
    printf("Reverse of %d = %d\n", r, reverse(r, 0));

    return 0;
}
