#include<stdio.h>
#define row 3
#define col 3

void main()
{
    int matrix1[row][col],matrix2[row][col];
    int i,j,mul[row][col],see,count=0;
printf("Input the values of the first matrix one by one in row-wise fasshion \n");
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        scanf("%d",&matrix1[i][j]);
    }
}

printf("Give me the number you are searching for \n");
scanf("%d",&see);
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        if(matrix1[i][j]==see)
        count=count+1;
        else 
        continue;
    }
}
printf("The number of time the number is repeated is %d",count);
}