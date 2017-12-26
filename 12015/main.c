#include<stdio.h>
int main()
{
    int i,c[11],max,t,j;
    char s[11][100];
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        max=-1;
        for(i=0;i<10;i++)
        {
        scanf("%s %d",s[i],&c[i]);
        }
        for(i=0;i<10;i++)
        {
        if(c[i]>max)
        max=c[i];
        }
        printf("Case #%d:\n",j);
        for(i=0;i<10;i++)
        {
        if(c[i]==max)
        printf("%s\n",s[i]);
        }
    }
    return 0;
}
