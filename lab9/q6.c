#include<stdio.h>
#define row 3
#define col 3

void main()
{
    int matrix1[row][col];
    int i,j,k,transpose=0,norm=0;
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


for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        if(i==j)
        transpose=transpose+matrix1[i][j];
    }
}
printf("\n\n");
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        norm=norm+matrix1[i][j]*matrix1[i][j];
    }
}

printf("The value of the transpose is %d \n and the norm is %d \n",transpose,norm);
}