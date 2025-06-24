// Program: Number-Based Case Programs (Palindrome, Armstrong, Prime, etc.)
// Author: Hryday
// Description: A switch-based menu program for various mathematical number checks.

#include <stdio.h>

int main()
{
    int aa, t = 0, r = 0, n, d, s = 0, sum = 0, digits, square, i, SUM = 0, a = 1, b = 1, c;
    printf("Enter the case: ");
    scanf("%d", &aa);

    switch (aa)
    {
    case 1: // Palindrome
        printf("Enter a number: ");
        scanf("%d", &n);
        t = n;
        r = 0;
        while (n != 0)
        {
            d = n % 10;
            r = r * 10 + d;
            n = n / 10;
        }
        if (r == t)
            printf("Palindrome\n");
        else
            printf("Not a palindrome\n");
        break;

    case 2: // Armstrong (single number)
        printf("Enter a number: ");
        scanf("%d", &n);
        t = n;
        s = 0;
        while (n != 0)
        {
            d = n % 10;
            s = s + d * d * d;
            n = n / 10;
        }
        if (s == t)
            printf("Armstrong\n");
        else
            printf("Not an Armstrong number\n");
        break;

    case 3: // Neon number
        printf("Enter a number: ");
        scanf("%d", &n);
        square = n * n;
        sum = 0;
        while (square != 0)
        {
            digits = square % 10;
            sum += digits;
            square = square / 10;
        }
        if (sum == n)
            printf("Neon\n");
        else
            printf("Not a Neon\n");
        break;

    case 4: // Sum of series
        printf("Enter a number: ");
        scanf("%d", &n);
        sum = 0;
        for (i = 1; i <= n; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("\nSum = %d\n", sum);
        break;

    case 26: // Prime numbers up to n
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("Prime numbers up to %d are: ", n);
        for (i = 2; i <= n; i++)
        {
            int isPrime = 1;
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime)
                printf("%d ", i);
        }
        printf("\n");
        break;

    case 27: // Prime check for number n
        printf("Enter a number: ");
        scanf("%d", &n);
        int isPrime = 1;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("It is prime\n");
        else
            printf("Not prime\n");
        break;

    case 28: // Sum of prime numbers up to n
        printf("Enter a number: ");
        scanf("%d", &n);
        sum = 0;
        for (i = 2; i <= n; i++)
        {
            int prime = 1;
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
            if (prime)
                sum += i;
        }
        printf("Sum of prime numbers up to %d is %d\n", n, sum);
        break;

    case 31: // Armstrong numbers between 1 to 1000
        printf("Armstrong numbers between 1 to 1000:\n");
        for (i = 1; i <= 1000; i++)
        {
            t = i;
            s = 0;
            int temp = i;
            while (temp != 0)
            {
                d = temp % 10;
                s += d * d * d;
                temp /= 10;
            }
            if (s == t)
                printf("%d ", t);
        }
        printf("\n");
        break;

    case 32: // Perfect number check
        printf("Enter a number: ");
        scanf("%d", &n);
        sum = 0;
        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
                sum += i;
        }
        if (sum == n)
            printf("Perfect number\n");
        else
            printf("Not a perfect number\n");
        break;

    case 33: // Perfect numbers from 1 to 1000
        printf("Perfect numbers between 1 and 1000 are: ");
        for (i = 1; i <= 1000; i++)
        {
            sum = 0;
            for (j = 1; j < i; j++)
            {
                if (i % j == 0)
                    sum += j;
            }
            if (sum == i)
                printf("%d ", i);
        }
        printf("\n");
        break;

    case 34: // Strong number check (single)
        printf("Enter a number: ");
        scanf("%d", &n);
        int z = n;
        s = 0;
        while (n != 0)
        {
            d = n % 10;
            int f = 1;
            for (i = 1; i <= d; i++)
                f *= i;
            s += f;
            n /= 10;
        }
        if (s == z)
            printf("Strong number\n");
        else
            printf("Not a strong number\n");
        break;

    case 35: // Strong numbers from 1 to 1000
        printf("Strong numbers between 1 and 1000 are: ");
        for (i = 1; i <= 1000; i++)
        {
            int temp = i, total = 0;
            while (temp != 0)
            {
                d = temp % 10;
                int f = 1;
                for (j = 1; j <= d; j++)
                    f *= j;
                total += f;
                temp /= 10;
            }
            if (total == i)
                printf("%d ", i);
        }
        printf("\n");
        break;

    case 36: // Fibonacci
        printf("Enter the number of Fibonacci terms: ");
        scanf("%d", &n);
        a = 1;
        b = 1;
        printf("Fibonacci Series: 1 1 ");
        for (i = 3; i <= n; i++)
        {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
        printf("\n");
        break;

    default:
        printf("Invalid case selected.\n");
        break;
    }
    return 0;
}
