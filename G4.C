#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],t,temp,m,n1,n2,i,j,k,l,b[100],count,sum=0,count1=0;
clrscr();
printf("enter the number of test cases\n");
scanf("%d",&t);
for(i=1;i<=t;i++)
{
sum = 0;
printf("enter the max size of array (even) \n");
scanf("%d",&n1);
for(j=1;j<=n1;j++)
{
scanf("%d",&a[j]);
}
count=n1;
for(l=1;l<=count/2;l++)
{
if(count1%2==0)
{
if(a[1]>a[n1])
{
temp=a[1];
for(k=1;k<n1;k++)
{
a[k]=a[k+1];
}
}
else if(a[n1]>a[1])
{
temp=a[n1];
}
printf("user 1 will choose  :  %d  " , temp);
printf("\n");
sum+=temp;
n1--;
}
count1++;
if(count1%2!=0&&n1!=1)
{

if(a[1]>a[n1])
{
temp = a[1];
for(m=1;m<n1;m++)
{
a[m]=a[m+1];
}
}
else if(a[n1]>a[1])
{
temp=a[n1];
a[n1]='\0';
}
printf(" user 2 will choose : %d ",temp);
printf("\n");
n1--;
}
else if(n1==1)
{
printf(" user 2 will choose : %d ",a[1]);
printf("\n");
}
count1++;
}
printf("the maximum amount the user 1 will collect will be : %d  \n",sum);
}
getch();
}
