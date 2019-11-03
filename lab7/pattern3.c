#include<stdio.h>
//code by gamefreakoneone (Amogh Biju)//
int main()
{
int i,j,number;
printf("How many rows do you want?\n");
scanf("%d",&number);
for(i=1;i<=number;i++)
{
    for(j=1;j<=i;j++)
    {
        printf(" * ");
    }
    printf("\n");
}
}