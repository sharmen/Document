#include<stdio.h>
int main()
{
    long int H1,M1,H2,M2,d,a,b;
    while(scanf("%ld%ld%ld%ld",&H1,&M1,&H2,&M2))
    {
        if(H1==0&&M1==0&&H2==0&&M2==0)
        break;
        a=H1*60+M1;
        b=H2*60+M2;
        if(a>b)
        {
            b=b+(24*60);
        }
    d=b-a;
    printf("%ld\n",d);

    }
}
