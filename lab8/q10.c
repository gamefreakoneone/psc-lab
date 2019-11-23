#include<stdio.h>

void main()
{
int num[10],i,j,n1[5],n2[5];

printf("Give me the list of numbers: \n");
for (i = 0; i < 10; i++)
{
    scanf("%d",&num[i]);
}
for(i=0;i<5;i++)
{
    n1[i]=num[i];
}
for(i=5;i<10;i++)
{
    n2[i-5]=num[i];
}
for (i = 0; i < 5; i++)
{
    printf("%3d ",n1[i]);    
}
printf("\n\n");
for (i = 0; i < 5; i++)
{
    printf("%3d ",n2[i]);    
}
}