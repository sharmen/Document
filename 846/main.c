#include<stdio.h>
#include<math.h>
int main()
{
    long int l,u,m,x,n,s,x1,m1,m2,t,i;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
    scanf("%ld%ld",&l,&u);
    m=(l+u)/2;
    x=m-l;
    n=(-1+sqrt(1+8*x))/2;
    s=2*n;
    x1=(n*(n+1))/2;
    m1=l+x1;
    m2=u-x1;
    if(m1!=m2)
    {
        if((m2-m1)<=(n+1))
        s=s+1;
        else
        s=s+2;
    }
    else
    s=2*n;
    printf("%ld\n",s);
    }
    return 0;
}
