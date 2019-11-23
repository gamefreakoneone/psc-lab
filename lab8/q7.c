#include<stdio.h>

void main()
{
int num[5],rnum[5],i,j;

printf("Give me the list of numbers: \n");
for (i = 0; i < 5; i++)
{
    scanf("%d",&num[i]);
}

for(i=0;i<5;i++)
{
    rnum[4-i]=num[i];
}
printf("\n");
for (i = 0; i < 5; i++)
{
    printf("%d \n",num[i]);
}

printf("\nThe new array is \n");
for (i = 0; i < 5; i++)
{
    printf("%d \n",rnum[i]);
}

}