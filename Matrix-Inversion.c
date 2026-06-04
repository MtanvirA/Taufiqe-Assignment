#include <stdio.h>

// function to take input of the elements
void inputMatrix(int n, int arr[n][n])
{
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

// functions to show the matrix
void printMatrix(int n, int arr[n][n])
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// function to determine the mini matrix for determinants
void mini(int n, int arr[n][n], int mrr[n - 1][n - 1], int row, int col)
{
    int r = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == row)
            continue;

        c = 0;
        for (int j = 0; j < n; j++)
        {
            if (j == col)
                continue;

            mrr[r][c] = arr[i][j];
            c++;
        }
        r++;
    }
}

// function to determine the determinant of a matrix
int determinant(int n, int arr[n][n])
{
    // base cases
    if (n == 1)
        return arr[0][0];
    if (n == 2)
    {
        return (arr[0][0] * arr[1][1] - arr[1][0] * arr[0][1]);
    }

    // parameters
    int det = 0;
    int sign = 1;
    int mrr[n - 1][n - 1];

    // only using the first row to get the determinant
    for (int j = 0; j < n; j++)
    {
        // mini matrix for each elements of the first row
        mini(n, arr, mrr, 0, j);
        // multiplying element with it's mini matrix
        det += sign * arr[0][j] * determinant(n - 1, mrr);
        // altering the sign
        sign *= -1;
    }

    return det;
}

// function to determine the cofactor matrix
void cofactor(int n, int arr[n][n], int crr[n][n])
{
    int mrr[n - 1][n - 1];
    int sign;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // accessing the mini matrix for each of the elements
            mini(n, arr, mrr, i, j);
            // sign convension
            if ((i + j) % 2 == 0)
                sign = 1;
            else
                sign = -1;
            // constructing the cofactor matrix
            crr[i][j] = sign * determinant(n - 1, mrr);
        }
    }
}

//function for adjoint matrix
void adjoint(int n, int crr[n][n], int drr[n][n])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            drr[i][j] = crr[j][i];
        }
    }
}

int main()
{
    // initializing the matrix parameters
    int n;
    printf("Enter the dimension of the matrix: ");
    scanf("%d", &n);

    // the matrix
    int arr[n][n];

    // taking input of the elements
    inputMatrix(n, arr);

    // showing the main matrix
    printf("\nThe main matrix: ");
    printMatrix(n, arr);
    printf("\n");

    // showing the determinant output
    int det = determinant(n, arr);
    printf("The determinant: %d", det);
    printf("\n");

    // showing the cofactor matrix
    int crr[n][n];
    cofactor(n, arr, crr);
    printf("\nThe cofactor matrix: ");
    printMatrix(n, crr);
    printf("\n");

    //showing the adjoint matrix
    int drr[n][n];
    adjoint(n, crr, drr);
    printf("The adjoint matrix: ");
    printMatrix(n, drr);
    printf("\n");
    return 0;
}