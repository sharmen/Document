#include <stdio.h>
int main()
{
int t,j,n,a[20],i,k;
scanf("%d",&t);
for(j=1;j<=t;j++)
{
scanf("%d",&n);
k=n/2;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Case %d: %d\n",j,a[k]);
}
return 0;
}
