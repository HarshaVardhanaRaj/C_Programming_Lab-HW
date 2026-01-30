#include <stdio.h>
void get_array(int a[2][2]);
void mul(int x[2][2], int y[2][2]);
void print_array(int arr[2][2]);
void transpose(int x[2][2]);


void get_array(int a[2][2])
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        printf("For row %d:\n", i + 1);
        for (j = 0; j < 2; j++)
        {
            printf("Enter element in column %d: ", j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
}

void print_array(int arr[2][2])
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
    printf("\n\n");
}

void mul(int x[2][2], int y[2][2])
{
    int prod[2][2];
    prod[0][0] =  x[0][0]*y[0][0] + x[0][1]*y[1][0];
    prod[0][1] =  x[0][0]*y[0][1] + x[0][1]*y[1][1];
    prod[1][0] =  x[1][0]*y[0][0] + x[1][1]*y[1][0];
    prod[1][1] =  x[1][0]*y[0][1] + x[1][1]*y[1][1];
    print_array(prod);
}

void transpose(int x[2][2])
{
    int tran[2][2], i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
        {
            if(i==j)
                tran[i][j] = x[i][j];
            else
                tran[i][j] = x[j][i];
        }
    print_array(tran);
}

int main()
{
    int arr1[2][2], arr2[2][2], sum[2][2], prod[2][2];
    int i, j;

    printf("Input values of Array 1:\n\n");
    get_array(arr1);
    printf("Array 1:\n");
    print_array(arr1);

    printf("Input values of Array 2:\n\n");
    get_array(arr2);
    printf("Array 2:\n");
    print_array(arr2);

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            sum[i][j] = arr1[i][j] + arr2[i][j];

    //sum of 2 matrices
    printf("Sum of both Matrices:\n");
    print_array(sum);

    //multiplication of 2 arrays
    printf("Prod of both Matrices:\n");
    mul(arr1,arr2);

    //transpose of matrix
    printf("Transpose of Array 1:\n");
    transpose(arr1);
    printf("Transpose of Array 2:\n");
    transpose(arr2);

    return 0;
}
