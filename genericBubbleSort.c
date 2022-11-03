#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void bubbleSort(int *r,int size)
{
int m,e,f,g;
m=size-2;
while(m>=0)
{
e=0;
f=1;
while(e<=m)
{
if(r[e]>r[f])
{
g=r[e];
r[e]=r[f];
r[f]=g;
}
e++;
f++;
}
m--;
}
}
int main()
{
int *x;
int y,j;
printf("Enter your requrinment :");
scanf("%d",&j);
if(j<=0)
{
printf("Invalid requrinment \n");
return 0;
}
x=(int *)malloc(sizeof(int)*j);
if(x==NULL)
{
printf("unable to allocate memory \n");
return 0;
}
y=0;
while(y<j)
{
printf("Enter number  :");
scanf("%d",&x[y]);
y++;
}
bubbleSort(x,j);
y=0;
while(y<j)
{
printf("%d \n",x[y]);
y++;
}
return 0;
}




