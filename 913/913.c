#include<stdio.h>
int main()
{
    long n,p,s;
    while(scanf("%ld",&n)!=EOF)
    {
    p=((n+1)*(n+1))/2-1;
    s=p+(p-2)+(p-4);
    printf("%ld\n",s);
    }
    return 0;
}
