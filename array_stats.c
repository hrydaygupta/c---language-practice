#include <stdio.h>

int main()
{
    int a[10], i, sum = 0, max, min, average;

    // Input: Read 10 integers
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    // Output: Reverse order
    printf("\nArray in reverse order: ");
    for (i = 9; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    // Sum of elements
    for (i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    printf("\nSum = %d", sum);

    // Average
    average = sum / 10;
    printf("\nAverage = %d", average);

    // Even/Odd sum check
    if (sum % 2 == 0)
    {
        printf("\nSum is even");
    }
    else
    {
        printf("\nSum is odd");
    }

    // Max and Min
    max = a[0];
    min = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }

    printf("\nMax = %d", max);
    printf("\nMin = %d\n", min);

    return 0;
}
