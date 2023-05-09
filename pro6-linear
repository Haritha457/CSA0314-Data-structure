#include <stdio.h>
#include <conio.h>
int linear(int[],int,int);
void main()
{
	int a[20],pos=-1,n,k,i;
	clrscr();
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the values of the array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to be search : ");
	scanf("%d",&k);
	pos=linear(a,n,k);
	if(pos!=-1)
		printf("Search element is in position %d ",pos);
	else
		printf("Search element is not found in the array");
	getch();
}
	int linear(int a[],int n,int k)
	{
		int i;
		for(i=0;i<n;i++)
		{
			if(a[i]==k)
			return(i);
		}
		return -1;
	}
