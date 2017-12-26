#include<stdio.h>
int main()
{
int t,i,k,j,m,n,h;
scanf("%d",&t);
for(h=1;h<=t;h++)
{
scanf("%d%d",&m,&n);
k=m/3;
j=n/3;
i=k*j;
printf("%d\n",i);
}
return 0;
}
