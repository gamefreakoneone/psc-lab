#include<stdio.h>
#include<string.h>

void main()
{
    int i,j;
    char a[80],b[20],g;
    
    printf("Give me a string: \n");
        scanf("%s",a);
    
    printf("Give me the second string: \n");
        scanf(" %s",b);
    
    printf("What do you wanna do? Press: \n c to concatenate the two strings \n l to find the length of the two strings \n i to copy the second string to the first \n");
        scanf(" %s",&g);

    if(g=='c')
    {
        strcat(a,b);
            printf("The concatenated string:\n %s \n",a);

    }
    else if(g=='l')
    {
        i=strlen(a);
        j=strlen(b);
        printf("the length of the first string is %d and the second string is %d",i,j);
    }
    else if (g=='i')
    {
          strcpy(a,b);
          printf("%s",a);  
    }
    else
    {
        printf("please try again later \n");
    }
    
       
}