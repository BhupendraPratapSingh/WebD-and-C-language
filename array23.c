#include<stdio.h>
int main()
{
    int a[3][3]  , b[3][3] ,c[3][3], i , j;
    printf("Enter the elements of the matrix A\n");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
        scanf("%d" , &a[i][j]);
    }                                               //Input
    printf("Enter the elements of the matrix B\n");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j< 3; j++)
    {
        scanf("%d" , &b[i][j]);                 //Input
    }
    printf("Matrix A is");
    for(i=0 ; i<3 ; i++)
    {                      
        printf("\n");
        for(j=0 ; j<3 ; j++)
        printf("%d " , a[i][j]);          //Display
    }
    printf("Matrix B is");
    for(i=0 ; i<3 ; i++)
    {                                     //Display
        printf("\n");
        for(j=0 ; j<3 ; j++)
        printf("%d ", b[i][j]);
    }
    for(i=0 ; i<3 ; i++)     
    for(j=0 ; j<3 ; j++)
    c[i][j] = a[i][j] + b[i][j];
    printf("Matrix after addition is\n");
    for(i=0 ; i<3 ; i++)
    {
        printf("\n");
        for(j=0 ; j<3 ; j++)
        printf("%d " , c[i][j]);
    }
     return 0;
    }

