#include<stdio.h>
#include<string.h>

void main()
{
    int i,j,k,l=0,words=1;
    char length[30];
    printf("Give me a string: \n");
    scanf("%[^\n]",length);
j=strlen(length);
    
    for(i=0;i<j;i++)
    {
        if(length[i]==' ')
        {
            words=words+1;
        }
    }
printf("the number of words is: \n %d \n",words);
}