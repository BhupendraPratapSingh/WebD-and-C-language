#include<stdio.h>
int main()
{
    int a[3][3] , b[3][3] , c[3][3],j ,i, k ;
    printf("Enter the values of the first matrix\n");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    { 
        scanf("%d" , &a[i][j]);
    }
    printf("Enter the values of the second matrix");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
        scanf("%d" , &b[i][j]);
    }
    printf("Display the first matrix");
    for(i=0 ; i<3  ; i++)
    {
        printf("\n");
        for(j=0 ; j<3 ; j++)
        printf("%d " , a[i][j]);
    }
    printf("Display the second matrix\n");
    for(i=0 ; i<3 ; i++)
    {
        printf("\n");
        for(j=0 ; j<3 ; j++)
        printf("%d " , b[i][j]);
    }
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            c[i][j]=0;
            for(k=0 ; k<3 ; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }}
        printf("Multiplication of matrix is\n");
        for(i=0 ; i<3 ; i++)
        {
            printf("\n");
            for(j=0 ; j<3 ; j++)
            printf("%d " , c[i][j]);
        }
        return 0;
    
}