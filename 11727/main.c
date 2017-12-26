#include <stdio.h>
int main()
{
    int i,j,a[10000],S,n,k,t;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
    for(i=0;i<3;i++)
    {
    scanf("%d",&a[i]);
    }
    for(k=0;k<3;k++)
    {
        for(i=0;i<3-1;i++)
        if(a[i]>a[i+1])
        {
            S=a[i];
            a[i]=a[i+1];
            a[i+1]=S;
        }
    }
printf("Case %d: %d\n",j,a[1]);
    }
    return 0;
}
