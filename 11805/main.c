#include<stdio.h>
int main()
{
    int t,n,k,p,i,a,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&n,&k,&p);
        {
        a=k+p;
        while(a>n)
        {
            a=a-n;
        }
        printf("Case %d: %d\n",i,a);
        }
    }
    return 0;
}
