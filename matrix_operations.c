#include <stdio.h>

int main()
{
    int a[3][3], i, j, choice, isSymmetric = 1;

    // Input: Choose the operation
    printf("Enter operation case number (1–6): ");
    scanf("%d", &choice);

    // Input: Matrix elements
    printf("Enter a 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    // Display the matrix
    printf("\nInput Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    switch (choice)
    {
    case 1:
        // Transpose
        printf("\nTranspose of the matrix:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                printf("%d\t", a[j][i]);
            printf("\n");
        }
        break;

    case 2:
        // Row-wise sum
        printf("\nSum of rows:\n");
        for (i = 0; i < 3; i++)
        {
            int rowSum = 0;
            for (j = 0; j < 3; j++)
                rowSum += a[i][j];
            printf("Sum of row %d = %d\n", i + 1, rowSum);
        }
        break;

    case 3:
        // Total sum of all elements
        {
            int totalSum = 0;
            for (i = 0; i < 3; i++)
                for (j = 0; j < 3; j++)
                    totalSum += a[i][j];
            printf("\nTotal sum of all elements = %d\n", totalSum);
        }
        break;

    case 4:
        // Column-wise sum
        printf("\nSum of columns:\n");
        for (j = 0; j < 3; j++)
        {
            int colSum = 0;
            for (i = 0; i < 3; i++)
                colSum += a[i][j];
            printf("Sum of column %d = %d\n", j + 1, colSum);
        }
        break;

    case 5:
        // Diagonal sums
        {
            int mainDiagSum = 0, secDiagSum = 0;
            for (i = 0; i < 3; i++)
            {
                mainDiagSum += a[i][i];
                secDiagSum += a[i][2 - i];
            }
            printf("\nMain diagonal sum = %d", mainDiagSum);
            printf("\nSecondary diagonal sum = %d\n", secDiagSum);
        }
        break;

    case 6:
        // Check if matrix is symmetric
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (a[i][j] != a[j][i])
                {
                    isSymmetric = 0;
                    break;
                }
            }
        }

        if (isSymmetric)
            printf("\nThe matrix is symmetric.\n");
        else
            printf("\nThe matrix is not symmetric.\n");
        break;

    default:
        printf("\nInvalid case number.\n");
    }

    return 0;
}
