// made by Amogh //

#include<stdio.h>

int main()
{
    int num[5],maxc=0,small,middle,i,j;
        printf("Give me the values you want to input \n");
        for(i=0;i<=4;i++)
            
                scanf("%d",&num[i]);
            
    for(j=0;j<=4;j++)
    {
       // maxcc=num[0];
         if(num[j]>maxc)
            maxc=num[j];
        else
            continue;
        
    }
small=maxc;
for(i=0;i<5;i++)
{
    if(num[i]<small)
    {
        small=num[i];
    }
    else
    {
        continue;
    }
    
}

    printf("%d is the largest number in the array \n %d is the smallest number in the array",maxc,small);
}