//made by Amogh Biju//
#include<stdio.h>

void main()
{
int num[5],i,j,odd,even,sum=0;

printf("Give me the list of numbers: \n");
for (i = 0; i < 5; i++)
{
    scanf("%d",&num[i]);
}

for(i=0;i<5;i++)
{
    if (num[i]%2!=0)
    {
        sum=sum+num[i];
    }
    else
        continue;    
}

printf("The sum of odd numbers are \n %d",sum);
}