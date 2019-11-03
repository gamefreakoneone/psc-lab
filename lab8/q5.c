//Facing an error//

#include<stdio.h>

int main()
{
    char name[5],a,b,i;

printf("give me your name \n");
for(i=0;i<6;i++)
{
    scanf("%c",&name[i]);
}

printf("the ANSII equivalent of your name is\n");
for(i=0;i<25;i++)
{
    printf("%d",name[i]);
}
}