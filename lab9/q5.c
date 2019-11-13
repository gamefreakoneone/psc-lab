#include<stdio.h>
#define row 3
#define col 3

void main()
{
    int matrix1[row][col],adj[row][col];
    int i,j,k,inter,count=0;
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
        adj[j][i]=matrix1[i][j];
    }
}
printf("The adjoint of the matrix is \n");
printf("\n\n");
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        printf("%d \t",adj[i][j]);
    }
    printf("\n");
}
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        if(adj[i][j]==matrix1[i][j])
        {
            continue;
        }
        else
        {
            count=count+1;
            break;
        }
        
    }
}
if(count==0)
printf("The matrix is  equal to its transpose. \n");
else
{
    printf("The matrix is not equal to its transpose \n");
}

}