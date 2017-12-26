#include<stdio.h>
int main()
{
 long int i,n,t,j;
  long a[1001];
float s=0,w,c,k;
scanf("%ld",&t);
for(j=1;j<=t;j++)
{
k=0;
scanf("%ld",&n);
for(i=1;i<=n;i++)
{
    scanf("%ld",&a[i]);
}
for(i=1;i<=n;i++)
{
k=k+a[i];
}
s=k/n;
c=0;
for(i=1;i<=n;i++)
{
if(s<a[i])
c++;
}
w=(c*100)/n;
    printf("%.3f\%%\n",w);
}
return 0;
}
