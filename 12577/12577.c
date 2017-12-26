#include<stdio.h>
#include<string.h>
main()
{
    char c[10];
    long long i=1;
    while(1)
    {
        scanf("%s",c);
        if(c[0]=='H')
        printf("Case %lld: Hajj-e-Akbar\n",i);
        else if(c[0]=='U')
        printf("Case %lld: Hajj-e-Asghar\n",i);
        else
        return 0;
        i++;
    }
}
