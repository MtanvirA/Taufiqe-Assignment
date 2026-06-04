#include<stdio.h>

//function to take input of the elements
void inputMatrix(int n, int arr[n][n])
{
    printf("Enter the elements of the matrix: \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

//functions to show the matrix
void printMatrix(int n, int arr[n][n])
{
    printf("\nThe Matrix: \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}

//function to determine the mini matrix for determinants
void mini(int n, int arr[n][n], int mrr[n][n], int row, int col)
{
    int r=0, c=0;

    for(int i=0; i<n; i++)
    {
        if(i==row) continue;

        c=0;
        for(int j=0; j<n; j++)
        {
            if(j==col) continue;

            mrr[r][c] = arr[i][j];
            c++;
        }
        r++;
    }

}

//function to determine the determinant of a matrix
int determinant(int n, int arr[n][n])
{
    //base cases
    if(n==1) return arr[0][0];
    if(n==2)
    {
        return (arr[0][0]*arr[1][1] - arr[1][0]*arr[0][1]);
    }

    //parameters
    int det = 0; 
    int sign = 1;
    int mrr[n][n];

    //only using the first row to get the determinant
    for(int j=0; j<n; j++)
    {
        //mini matrix for each elements of the first row
        mini(n, arr, mrr, 0, j);
        //multiplying element with it's mini matrix
        det += sign*arr[0][j]*determinant(n-1, mini);
        //altering the sign
        sign *= -1;
    }

    return det;

}

//function to determine the cofactor matrix 
void cofac(int n, int arr[n][n])
{

}

int main()
{
    //initializing the matrix parameters
    int n;
    printf("Enter the dimension of the matrix: ");
    scanf("%d", &n);
   
    //the matrix
    int arr[n][n];

    //taking input of the elements
    inputMatrix(n, arr);

    //showing the main matrix
    printMatrix(n, arr);

    
    return 0;

    
}