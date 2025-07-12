#include <stdio.h>

int main()
{
    int aa;
    printf("Input the case number (1 for sum, 2 for even numbers): ");
    scanf("%d", &aa);

    switch (aa)
    {
        case 1:
        {
            // Case 1: Calculate sum of 6 elements
            int a[20], i, sum = 0;
            printf("Enter 6 integers:\n");
            for (i = 0; i < 6; i++)
            {
                scanf("%d", &a[i]);
            }

            for (i = 0; i < 6; i++)
            {
                sum += a[i];
            }

            printf("Sum = %d\n", sum);
            break;
        }

        case 2:
        {
            // Case 2: Display even numbers from 6 inputs
            int a[20], i;
            printf("Enter 6 integers:\n");
            for (i = 0; i < 6; i++)
            {
                scanf("%d", &a[i]);
            }

            printf("Even numbers: ");
            for (i = 0; i < 6; i++)
            {
                if (a[i] % 2 == 0)
                {
                    printf("%d ", a[i]);
                }
            }
            printf("\n");
            break;
        }

        default:
            printf("Invalid case number.\n");
    }

    return 0;
}
