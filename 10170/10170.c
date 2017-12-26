#include<stdio.h>
int main()
{
long long s,d,i,n;
while(scanf("%lld%lld",&s,&d)!=EOF)
{
if(s>0&&d>0)
{
n=0;
for(i=s;i<=d;i++)
{
n=n+i;
if(n>d || n==d)
{
printf("%lld\n",i);
break;
}
}
}
}
return 0;
}
