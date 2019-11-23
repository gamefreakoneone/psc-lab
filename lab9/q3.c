#include<stdio.h>
#define row 3
#define col 3

void main()
{
    int matrix1[row][col],matrix2[row][col];
    int i,j,k,mul[row][col],see,count=0;
printf("Input the values of the first 3x3 matrix one by one in row-wise fasshion \n");
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        scanf("%d",&matrix1[i][j]);
    }
}
printf("\n\n");
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        printf("%d \t",matrix1[i][j]);
    }
    printf("\n");
}
printf("Input the values of the second 3x3 matrix one by one in row-wise fasshion \n");
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        scanf("%d",&matrix2[i][j]);
    }
}
printf("\n\n");
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        printf("%d \t",matrix2[i][j]);
    }
    printf("\n");
}
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        mul[i][j]=0;
        for(k=0;k<row;k++)
        {
            mul[i][j]=mul[i][j]+matrix1[i][k]*matrix2[k][j];
        }
    }
}

printf("\n\n The multiplied matrix is \n");
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        printf("%d \t",mul[i][j]);
    }
    printf("\n");
}
}