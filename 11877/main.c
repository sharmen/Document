#include<stdio.h>
int main()
{
    long i,n;
    while(scanf("%ld",&n)!=EOF)
    {
        if(n==0)
        break;
        else
        i=n/2;
        printf("%ld\n",i);
    }
return 0;
}
