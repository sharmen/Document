#include<stdio.h>
int main()
{
 long int a,b,c,d,l,m,k,x;
   while(scanf("%ld%ld%ld%ld%ld",&a,&b,&c,&d,&l))
{
k=0;
if(a==0&&b==0&&c==0&&d==0&&l==0)
break;
    for(x=0;x<=l;x++)
    {
        m=a*(x*x)+b*x+c;
    if(m%d==0)
    k++;

    }
printf("%ld\n",k);
}


return 0;
}
