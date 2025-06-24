// input_output.c
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}

// data_types.c
#include <stdio.h>

int main() {
    int i = 10;
    float f = 5.5;
    char c = 'A';
    printf("Integer: %d\n", i);
    printf("Float: %.2f\n", f);
    printf("Char: %c\n", c);
    return 0;
}

// conditional.c
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
        printf("Positive number\n");
    else if (num < 0)
        printf("Negative number\n");
    else
        printf("Zero\n");
    return 0;
}

// switch_cases.c
#include <stdio.h>

int main() {
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    switch (day) {
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
        case 7: printf("Saturday\n"); break;
        default: printf("Invalid day\n");
    }
    return 0;
}

// loops.c
#include <stdio.h>

int main() {
    int i;
    printf("For loop from 1 to 5:\n");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    i = 1;
    printf("While loop from 1 to 5:\n");
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    i = 1;
    printf("Do-while loop from 1 to 5:\n");
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    return 0;
}

// array_sum.c
#include <stdio.h>

int main() {
    int arr[5], sum = 0;
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
    return 0;
}

// prime_check.c
#include <stdio.h>

int main() {
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime && n > 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}

// palindrome.c
#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}

// armstrong.c
#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}

// strong_number.c
#include <stdio.h>

int factorial(int num) {
    int f = 1;
    for (int i = 1; i <= num; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n, temp, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == n)
        printf("%d is a Strong number.\n", n);
    else
        printf("%d is not a Strong number.\n", n);

    return 0;
}

// perfect_number.c
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n)
        printf("%d is a Perfect number.\n", n);
    else
        printf("%d is not a Perfect number.\n", n);

    return 0;
}
