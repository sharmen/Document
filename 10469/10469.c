#include<stdio.h>
int main()
{
    long int a,b,c;
    while(scanf("%ld%ld",&a,&b)!=EOF)
    {
        if(a>=0&&b>=0)
        {
            c=a^b;
            printf("%ld\n",c);
        }
    }
    return 0;
}
