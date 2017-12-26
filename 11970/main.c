#include <stdio.h>
#include <math.h>
int main ()
{
    int x,N,a,i,t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
    scanf("%d",&N);
    printf("Case %d:",j);
    for(i=sqrt(N-1);i>0;i--)
    {
    x=N-i*i;
    a=x/i;
    if(a*i==x)
    printf(" %d",x);
    }
    printf("\n");
    }
  return 0;
}
