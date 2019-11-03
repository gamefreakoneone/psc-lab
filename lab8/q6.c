#include<stdio.h>

void main()
{
int num[10],i,j,odd=0,even=0,positive=0,negative=0;

printf("Give me the list of numbers: \n");
for (i = 0; i <=7; i++)
{
    scanf("%d",&num[i]);
}

for(i=0;i<=7;i++)
{
    if (num[i]%2!=0)
    {
        odd=odd+1;
    }    
    else
    {
        even=even+1;
    }

    if(num[i]>0)
    {
        positive=positive+1;
    }
    else
    {
        negative=negative+1;
    }
    
}

printf("The number of odd numbers are %d \n The number of even numbers are %d \n The number of positive numbers are %d \n The number of negative numbers are %d",odd,even,positive,negative);
}