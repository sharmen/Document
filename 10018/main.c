#include <stdio.h>
int main()
{
   long int n,c,s,r,d,p,i;
    scanf("%ld",&p);
    for(i=1;i<=p;i++)
    {
scanf("%ld",&n);
        d=n;
        c=0;
        while (1)
        {
            s=0;
            while (d>0)
            {
                r=d%10;
                s=s*10+r;
                d=d/10;
            }
            if (n==s)
                break;
            else
            {
                d=s+n;
                n=s+n;
                c++;
            }
        }
        printf("%ld %ld\n",c,n);
    }
    return 0;
}
