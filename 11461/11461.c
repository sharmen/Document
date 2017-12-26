#include<stdio.h>
#include<math.h>
int main()
{
    long int i,m,n,b,c,t;
    while(scanf("%ld%ld",&m,&n))
    {
    if(m==0 || n==0)
    break;
    if(m>n)
    {
        t=m;
        m=n;
        n=t;
    }
    c=0;
    for(i=sqrt(m);i<=sqrt(n);i++)
    {
        b=i*i;
        if(b<=n&&b>=m)
        c++;
    }
    printf("%ld\n",c);
    }
    return 0;
}
