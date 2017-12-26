#include<stdio.h>
int main()
{
    int a,b,s,d,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&s,&d);
        {
        if(s>=0&&d>=0)
        if(s>=d)
        {
        a=(s+d)/2;
        b=(s-d)/2;
        if(a+b==s&&a-b==d)
        {
            printf("%d %d\n",a,b);
        }
        else
        printf("impossible\n");
        }
        else
        printf("impossible\n");
        }
    }
    return 0;
}
