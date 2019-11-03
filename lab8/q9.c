#include<stdio.h>

void main()
{
int num[5],i,j,max,min,nenum[5];

printf("Give me the list of numbers: \n");
for (i = 0; i < 5; i++)
{
    scanf("%d",&num[i]);
}

for(j=0;j<5;j++)
{
    for(i=0;i<5;i++)
    {
        if(num[i]>num[i+1])
        {
            max=num[i];
            num[i]=num[i+1];
            num[i+1]=max;
        }
    }
}

for(i=0;i<5;i++)
{
    printf("%d \n",num[i]);
}

}