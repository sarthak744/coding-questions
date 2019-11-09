#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],temp,i,j,k,sum=0,sum1=0;
clrscr();
printf("enter the array\n");
for(i=1;i<=6;i++)
{
scanf("%d",&a[i]);
}
for(i=2;i<=5;i++)
{
sum=0;
sum1=0;
temp=a[i];
for(j=1;j<i;j++)
{
sum+=a[j];
}
for(k=6;k>i;k--)
{
sum1+=a[k];
}
if(sum==sum1)
{
printf("the partition line is on %d at position %d such that sum of elements on either side of this line is equal\n",a[i],i);
}
}

getch();
}

