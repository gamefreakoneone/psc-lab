//made by Gamefreakoneone (Amogh)
#include<stdio.h>
int sumeven(int a, int b);
int sumodd(int a, int b);

void main()
{
    int max,min,odd,even;

    printf("Please give me the range i.e the start and the stop: \n");
    scanf("%d %d",&min,&max);

    
    even=sumeven(min,max);
    odd=sumodd(min,max);
    printf("%d \n %d \n",even,odd);

}

int sumeven(int a,int b)
{
    int i,j;
    
    if(a%2==0 && a<b)
        {
            return a+sumeven(a+2,b);
        }
    else if (a%2!=0 && a<b)
    {
        a=a+1;
        return a+sumeven(a+2,b);
    }   
}

int sumodd(int a,int b)
{
    int i,j;
    
    if(a<b)
        {
            if(a%2 != 0)
            {
                return a + sumodd(a+2,b);
            }
            else
            {
                return sumodd(a+1,b);
            }
            
        }
    else
    {
        return 0;
    }   
}