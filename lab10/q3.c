#include<stdio.h>
#include<string.h>

void main()
{
    int i ,j,index=-1;
    char str[30],k;
    printf("Give me a string: ");
    scanf("%[^\n]",str);
j=strlen(str);
    printf("Which letter do you want to find? \n");
    scanf("%s",&k);

    for(i=0;i<j;i++)
    {
        if(str[i]==k)
        index=i+1;
    }

    if(index==-1)
    printf("Sorry the word you are looking for is not there \n");
    else
    {
        printf("The letter %c is present at %d in the array \n",k,index);
    }
    
}