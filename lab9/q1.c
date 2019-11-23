#include<stdio.h>
#define STUDENTS 3
#define SUBJECTS 5

void main()
{
   int value[STUDENTS][SUBJECTS],total[STUDENTS],sub[SUBJECTS],average[SUBJECTS];
   int i,j,k;

   printf("give me the marks for maths, chemistry, english, electric and mechanical one at a time, row wise \n");
   for(i=0;i<STUDENTS;i++)
   {
       total[i]=0;
       for(j=0;j<SUBJECTS;j++)
       {
           scanf("%d",&value[i][j]);
            total[i]=total[i]+value[i][j];
       }
   }

for(j=0;j<SUBJECTS;j++)
{
    sub[j]=0;
    for(i=0;i<STUDENTS;i++)
    {
        sub[j]=sub[j]+value[i][j];
        average[j]=sub[j]/3;
    }   
}


   for(i=0;i<STUDENTS;i++)
   {
       printf("The total marks scored by student %d is %d \n",i+1,total[i]);
   }
   printf("\n\n");
printf("The average of maths is %d \n",average[0]);
printf("The average of chemistry is %d \n",average[1]);
printf("The average of english is %d \n",average[2]);
printf("The average of electric is %d \n",average[3]);
printf("The average of mechanical is %d \n",average[4]);
}