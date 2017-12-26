#include<stdio.h>
int main()
{
    int i,n,a[101],j,r,c;
    scanf("%d",&n);
    if(n<20)
    {
    printf("Lumberjacks:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<10;j++)
        scanf("%d",&a[j]);
        {
        r=0;
        for(j=0;j<10;j++)
        {
            if(a[j]<a[j+1])
               r++;
        }
        c=1;
        for(j=0;j<10;j++)
        {
            if(a[j]>a[j+1])
            c++;
        }
    if(r==10||c==10)
     printf("Ordered\n");
    else
    printf("Unordered\n");
    c=1;
    r=0;
    }
    }
    }
    return 0;
}
