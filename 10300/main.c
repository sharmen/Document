#include <stdio.h>
int main()
{
    int t,f,i,j;
    long a,b,c,s;
    while(scanf("%d",&t)!=EOF)
    for(j=1;j<=t;j++)
    {
    s=0;
    scanf("%d",&f);
    for(i=0;i<f;i++)
    {
    scanf("%ld %ld %ld",&a,&b,&c);
    s=s+a*c;
    }
    printf("%ld\n",s);
    }
    return 0;
}
