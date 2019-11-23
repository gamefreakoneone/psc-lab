
#include<stdio.h>
int armstrong();
int perfect();

void main()
{

    int arm[3],given[3];
    char answer;
printf("What do you want to see? A perfect number or an armstrong number?\n type p for perfect number or a for armstrong number \n");
scanf("%c",&answer);

if(answer=='p')
    {
        printf("You have chosen to check a perfect number \n");
        perfect();
    }
    else if(answer=='a')
    {
        printf("You have chosen to check armstrong number \n");
        armstrong();
    }
    
}

int perfect()
{
    int i,j,sum=0,k;
    int perfecto[30];
    printf("Give me a three digit number: \n");
        scanf("%d",&k);
    for(i=1,j=0;i<k;i++)
    {
        if(k%i==0)
        {
            perfecto[j]=i;
            j++;
        }
        else
        {
            continue;
        }
        

    }

    for(i=0;i<3;i++)
        {
            sum=perfecto[i]+sum;
        }

    if(sum==k)
        printf("The number is a perfect number \n");
    else
        {
            printf("it is not a perfect number.\n");
        }
}

int armstrong()
{
    int i,j,k,sum=0;
    int arm[10];
    printf("Give me a three digit number: \n");
    scanf("%d",&k);
j=k;
    for(i=0;i<3;i++)
    {
        arm[i]=j%10;
        j=j/10;
    }

    for(i=0;i<3;i++)
    {
        sum=sum+(arm[i]*arm[i]*arm[i]);
    }

    if(sum==k)
        printf("It is an armstrong number. \n");
    else
    {
        printf("It is not an armstrong number. \n");
    }
}