#include <stdio.h>
int main()
{
     long a,b,c,d;
while(scanf("%ld%ld",&a,&b)!=EOF)
    {
    if(a<b)
    {
       c=a;
       a=b;
       b=c;
    }
    d=a-b;
    printf("%ld\n",d);
    }
    return 0;
}
