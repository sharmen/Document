#include<stdio.h>
int main()
{
int t,c,d,i;
double f,r;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%d%d",&c,&d);
{
if(c>=0&&d<=100)
{
f=((double)(9*c)/5)+32;
f=f+d;
r=(double)(5*(f-32))/9;
printf("Case %d: %.2lf\n",i,r);
}
}
}
return 0;
}
