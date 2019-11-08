#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],same,j,k,l,i,count=0,count1=0;
clrscr();
printf("enter the array of repeating elements\n");
for(i=1;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
same=a[i];
if(same==a[j]&&j!=i)
{
count++;
}
}
if(count==0)
{
printf("non repeating element : %d \n ",a[i]);
count1++;
}
count=0;
}
if(count1==0)
{
printf("all repeating elements\n");
}
getch();
}