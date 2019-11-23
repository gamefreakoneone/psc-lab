// made by Amogh//
#include<stdio.h>
#include<string.h>

void main()
{
    int i,vowel=0,consonant=0,a;
    char str[50];

printf("Give me a word \n");
scanf("%s",&str[10]);
a=strlen(str);
printf("%d",a);

for(i=0;i<5;i++)
{
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A' || str[i]=='E' ||  str[i]=='I' || str[i]=='O' || str[i]=='U' )
    {
        vowel=vowel+1; 
    }
    else
    {
        consonant=consonant+1;
    }
}
printf("The number of vowels is %d and consonants is %d \n",vowel,consonant);
}