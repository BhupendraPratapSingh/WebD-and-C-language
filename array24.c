#include<stdio.h>
int main()
{
    int a[3][3]  , i , j ; 
    printf("Enter the Matrix A\n");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
        scanf("%d " , &a[i][j]);
    }
    printf("The Matrix elements are\n");
    for(i=0 ; i<3 ; i++)
    {   printf("\n" );
        for(j=0 ; j<3 ; j++)
        printf("%d " , a[i][j]);
    }
    printf("Transpose of a matrix is\n");
    for(i=0 ; i<3 ; i++)
    {
        printf("\n");
        for(j=0 ; j<3 ; j++)
        printf("%d " , a[j][i]);
    }
    return 0;
}