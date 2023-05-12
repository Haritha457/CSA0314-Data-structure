#include<stdio.h>
#include<conio.h>
int main()
{
float marks[7],total_marks,percentage;
int i;
char *division;
for(i=0;i<7;i++)
{
printf("enter the marks of a student %d:",i);
scanf("%f",&marks[i]);
}
total_marks=0;
for(i=0;i<7;i++)
{
total_marks+=marks[i];
}

percentage=((total_marks/700)*100);
if(percentage>60)
{
division="first_division";
}
else
{
division="fail";
}
printf("total_marks:%2f \n",total_marks);
printf("percentage:%2f \n",percentage);
printf("division:%s \n",division);
if(percentage>60)
{
printf("congratulation you have first division");
}
getch();
return 0;
}
