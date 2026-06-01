#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],i,j,k;
    printf("Enter first matrix:");
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    printf("Enter second matrix:");
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
        {
            c[i][j]=a[i][j]+b[i][j];

        }
    printf("Sum of the two matrices is:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
    
    
}