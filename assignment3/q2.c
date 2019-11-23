//made by Gamefreakoneone (Amogh)
#include<stdio.h>

void main()
{
    int rows,col,i,j;
    printf("how many rows and columns do you want? \n");
    scanf("%d %d",&rows,&col);
    for(i=0;i<rows;i++)
    {
        for (j=0;j<col;j++)
        {
            if(i==0 || i==rows-1)
            printf("*");
            else
            {
                if(j==0 || j==col-1)
                printf("*");
                else
                {
                    printf(" ");
                }
                
            }
        }
        
            printf("\n");
    }

}