#include<stdio.h>
int main()
{
    int t,i,n,m,a[100],j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        m=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]>m)
            m=a[j];
        }
        printf("Case %d: %d\n",i,m);
    }
    return 0;
}
