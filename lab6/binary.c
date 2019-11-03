#include<stdio.h>
int main()
{
long long decimal,tempdecimal,binary;
int rem,place=1;
binary=0;
printf("Enter a decimal number: \n");
scanf("%d",&decimal);
tempdecimal=decimal;
while (tempdecimal>0)
    {
        rem=tempdecimal%2;
        binary=(rem*place)+binary;
        tempdecimal /=2;
        place*=10;
    }
    printf("Decimal number is %ld \n",decimal);
    printf("Binary number is %ld \n",binary);
}