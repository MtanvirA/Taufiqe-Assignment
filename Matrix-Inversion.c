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