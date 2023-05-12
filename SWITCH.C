#include<stdio.h>
#include<conio.h>
int main()
{
int a=16,b=4,c,d;
clrscr();
printf("choose the choice");
scanf("%d",&c);
switch(c)
{
case 1:
d=a+b;
printf("add=%d",d);
break;
case 2:
d=a-b;
printf("sub=%d",d);
break;
case 3:
d=a*b;
printf("mul=%d",d);
break;
case 4:
d=a/b;
printf("div=%d",d);
break;
case 5:
d=a%b;
printf("rem=%d",d);
break;
}
getch();
return 0;
}