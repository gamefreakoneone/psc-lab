// Made by gamefreakoneone (Amogh)
#include<string.h>
#include<stdio.h>

void main()
{
    int i,j,flag;
    char numb[20];
    printf("Give me a binary number: \n");
    
        scanf("%s",numb);
    printf("The given number is \n");
        printf("%s",numb);
    j=strlen(numb);    

    for(i=0;i<j;i++)
    {
        if(numb[i]=='0' ||numb[i]=='1')
        flag=0;
        else
        {
            flag=1;
        }
        
    }

    if (flag==1)
    {
        printf("\n Please input a proper binary number \n");
        goto end;
    }
    
for ( i = 0; i < j; i++)
{
    if(numb[i]=='0')
    numb[i]='1';
    else
    {
        numb[i]='0';
    }
    
}

printf("\nThe ones compliment of the given number is \n");
printf("%s \n",numb);
    end:
    ;
}