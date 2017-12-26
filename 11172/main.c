#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t;
    long a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld %ld",&a,&b);
        if(a>b)
        printf(">\n");
        if(a<b)
        printf("<\n");
        if(a==b)
        printf("=\n");
    }
    return 0;
}
