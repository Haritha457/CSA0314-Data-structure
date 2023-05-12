#include<stdio.h>
#include<conio.h>
int q[20],top=-1,front=-1,rear=-1,a[20][20],vis[20],stack[20];
int delete();
void add(int item);
void bfs(int s,int n);
void dfs (int s, int n);
void push (int item);
int pop();
void main()
{
int n,i,s,ch,j;
char c,dummy;
clrscr();
printf("enter the number verctices");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
for (j=1;j<=n;j++)
{
printf("enter 1 if %d has a node with %d else 0",i,j);
scanf("%d",&a[i][j]);
}
}
printf("the adjacency matrix is \n");
for (i=1;i<=n;i++);
{
for(j=1;j<=n;j++);
{
printf("%d",a[i][j]);
}
printf("\n");
}
do
{
for(i=1;i<=n;i++)
vis[i]=0;
printf("\n MENU");
printf("\n 1.bfs");
printf("\n 2. dfs");
printf("\n enter yuor choice");
scanf("%d",&ch);
printf("enter the source vertex :");
scanf("%d",&s);
switch(ch)
{
case 1:bfs(s,n);
break;
case 2:dfs(s,n);
break;
}
printf("do you want to continue(Y/N?)");
scanf("%c",&dummy);
scanf("%c",&c);
}
while((c=='y')||(c=='Y'));
getch();
}
void bfs(int s,int n)
{
int p,i;
add(s);
vis[s]=1;
p=delete();
if(p!=0)
printf("%d",p);
while(p!=0)
{
for(i=1;i<=n;i++)