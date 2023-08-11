#include<stdio.h>
int main()
{
  int m=3,n=3;  
  int mat1[m][n], mat2[m][n], mat3[m][n], sum=0, i, j, k;
    printf("Enter first 3*3 matrix element: ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("Enter second 3*3 matrix element: ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d", &mat2[i][j]);
    }
    printf("\nMultiplying two matrices...");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
                sum = sum + mat1[i][k] * mat2[k][j];
            mat3[i][j] = sum;
        }
    }
    printf("\nMultiplication result of the two given Matrix is: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\t", mat3[i][j]);
        printf("\n");
    }
    return 0;
}
