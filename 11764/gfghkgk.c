#include<stdio.h>

int main()
{
int i,j,m,n,a[100],h,l;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
h=0;
l=0;
scanf("%d",&m);
for(j=0;j<m;j++)
{
scanf("%d",&a[j]);
}
for(j=1;j<m;j++)
{
if(a[j-1]>a[j])
l++;
if(a[j]>a[j-1])
h++;
}
printf("Case %d: %d %d\n",i,h,l);
}
return 0;
}
