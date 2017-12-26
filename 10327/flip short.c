#include<stdio.h>
int main()
{
   int i,j,k,m,n,a[1000],t,TEMP;
    while(scanf("%d",&n)!=EOF)
    {
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
t=0;
for(k=1;k<=n;k++)
{
for(j=1;j<=n-1;j++)
 {
if(a[i]>a[i+1])
{

  TEMP=a[i];
  a[i]=a[i+1];
  a[i+1]=TEMP;
t++;
   }

  }
}
printf("Minimum exchange operations : %d\n",t);
}
return 0;
}

