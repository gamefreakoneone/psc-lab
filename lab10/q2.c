#include<stdio.h>
#include<string.h>

int main()
{
	char name[50];
  int a,i;
	
	printf("\n Give me a string \n");
	scanf("%[^\n]",name);
	a=strlen(name);
	printf("=============\n");
for(i=0;i<a;i++)
{
  if(name[i]>='a' && name[i]<='z')
  {
    name[i]=name[i]-32;
  }
}
	printf("%s", name);
	
	return 0;
}