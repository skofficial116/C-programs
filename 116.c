#include <stdio.h>
#include <stdlib.h>

void readMatrix(int **matrix, int m, int n);
void displayMatrix(int **matrix, int m, int n);
void multiplyMatrix(int **matrix1, int m1, int n1, int **matrix2, int m2, int n2, int **result);
void addMatrix(int **matrix1, int **matrix2, int **result, int m, int n);
void subtractMatrix(int **matrix1, int **matrix2, int **result, int m, int n);
void transposeMatrix(int **matrix, int m, int n, int **result);

int main()
{
    int choice;
    int m, n;
    int **matrix1, **matrix2, **result;

    printf("Enter the number of rows and columns for both matrices (m n): ");
    scanf("%d %d", &m, &n);

    matrix1 = (int **)malloc(m * sizeof(int *));
    matrix2 = (int **)malloc(m * sizeof(int *));
    result = (int **)malloc(m * sizeof(int *));

    for (int i = 0; i < m; i++)
    {
        matrix1[i] = (int *)malloc(n * sizeof(int));
        matrix2[i] = (int *)malloc(n * sizeof(int));
        result[i] = (int *)malloc(n * sizeof(int));
    }

    printf("Matrix 1:\n");
    readMatrix(matrix1, m, n);
    printf("Matrix 2:\n");
    readMatrix(matrix2, m, n);
    printf("Sachin Kumar\n");
    printf("Choose an operation:\n");
    printf("1. Matrix Addition\n");
    printf("2. Matrix Subtraction\n");
    printf("3. Matrix Multiplication\n");
    printf("4. Transpose of Matrix 1\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        addMatrix(matrix1, matrix2, result, m, n);
        printf("Matrix Addition Result:\n");
        displayMatrix(result, m, n);
        break;
    case 2:
        subtractMatrix(matrix1, matrix2, result, m, n);
        printf("Matrix Subtraction Result:\n");
        displayMatrix(result, m, n);
        break;
    case 3:
        multiplyMatrix(matrix1, m, n, matrix2, m, n, result);
        printf("Matrix Multiplication Result:\n");
        displayMatrix(result, m, n);
        break;
    case 4:
        transposeMatrix(matrix1, m, n, result);
        printf("Transpose of Matrix 1:\n");
        displayMatrix(result, n, m);
        break;
    default:
        printf("Invalid choice.\n");
    }

    for (int i = 0; i < m; i++)
    {
        free(matrix1[i]);
        free(matrix2[i]);
        free(result[i]);
    }

    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}

void readMatrix(int **matrix, int m, int n)
{
    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int **matrix, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrix(int **matrix1, int m1, int n1, int **matrix2, int m2, int n2, int **result)
{
    if (n1 != m2)
    {
        printf("Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return;
    }

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void addMatrix(int **matrix1, int **matrix2, int **result, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrix(int **matrix1, int **matrix2, int **result, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void transposeMatrix(int **matrix, int m, int n, int **result)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[j][i] = matrix[i][j];
        }
    }
}
