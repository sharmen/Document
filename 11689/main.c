#include<stdio.h>
main()
{
    long a,b,f=0,s,m,n,t,i,y;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
    scanf("%ld %ld %ld",&a,&m,&b);
    a=a+m;
    while(a>=b)
    {
        s=a%b;
        a=a/b;
        f=f+a;
        a=a+s;
    }
    printf("%ld\n",f);
    f=0;
    s=0;
    }
}
