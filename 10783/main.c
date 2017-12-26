#include<stdio.h>
int main()
{
int i,j,k,a,b,t;
scanf("%d",&t);
for(j=1;j<=t;j++)
{
k=0;
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2!=0)
{
k=k+i;
}
}
printf("Case %d: %d\n",j,k);
}
return 0;
}
