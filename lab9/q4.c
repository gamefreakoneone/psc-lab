// THERE IS SOMETHING WRONG WITH THIS CODE.... PLEASE WAIT UNTIL FURTHER UPDATES.

#include<stdio.h>
#define row 3
#define col 3

// void main()
{
    int matrix1[row][col],matrix2[row][col];
    int i,j,mul[row][col],see,flag=0,sum,sum1,sum2;
printf("Input the values of the first matrix one by one in row-wise fasshion \n");
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        scanf("%d",&matrix1[i][j]);
    }
}
sum=0;
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        if(i=j)
        sum=sum+matrix1[i][j];
    }
}

for(i=0;i<row;i++)
{   sum1=0;
    for(j=0;j<col;j++)
    {
        
        sum=sum+matrix1[i][j];
    }
}

}//