#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],temp,temp2,sum=0,i,j,k,l,m,n,count=0,count1=0;
clrscr();
printf("enter the array\n");
for(i=1;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=5;i++)
{
temp=a[i];
for(l=1;l<=4;l++)
{
temp2=a[l+1];
for(j=1;j<=5;j++)
{
sum=0;
if(a[j]!=temp||a[j]!=temp2)
{
sum=sum+temp+temp2+a[j];
count++;
}
if(sum==0&&count==1)
{
printf("triplet with sum 0 :  %d %d %d\n",temp,temp2,a[j]);
}
count=0;
}
}
}
getch();
}
