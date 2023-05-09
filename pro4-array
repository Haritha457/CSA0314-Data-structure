#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,Size;
int Even_Sum=0,Odd_Sum=0;
printf("\n enter the size of the array:");
scanf("%d",&Size);
printf("\n enter the array elements \n");
for(i=0;i<Size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<Size;i++)
{
if(a[i]%2==0)
{
	Even_Sum=Even_Sum + a[i];
}
else
{
	Odd_Sum=Odd_Sum + a[i];
}
}
if(Even_Sum>Odd_Sum)
{printf("\nSum of the even numbers:%d",Even_Sum);
}else if(Odd_Sum>Even_Sum){
printf("\nSum of the odd numbers:%d",Odd_Sum);
}else{
printf("\nThe sum of the even and odd numbers is same:%d",Even_Sum);}
getch();
return 0;
}
