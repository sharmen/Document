#include<stdio.h>
int main()
{
    long int n,m;
    while(scanf("%ld",&n))
    {
    if(n<0)
    break;
    else if(n==1)
    printf("0%%\n");
    else
    {
    m=n*25;
    printf("%ld%%\n",m);
    }
    }
    return 0;
}
