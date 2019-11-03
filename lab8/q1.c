#include<stdio.h>
// AMOGH MADE THIS ////

 int main()
{
    int lucky[5]={54,34,69,45,56} ,check=0,num,i,j;
        printf("Check wheter or not you have the lucky number \n");
            scanf("%d",&num);
    for(i=0;i<=4;i++)
    {
        if(lucky[i]==num)
        {
            check=1;
            break;
        }
        
    }
    if(check==1)
    printf("ITS THE LUCKY NUMBER \n");
    else
    {
        printf("better luck next time \n");
    }
    return 0;
}