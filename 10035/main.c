#include<stdio.h>
int main()
{
long int a,b,i,d,c;
while(scanf("%ld %ld",&a,&b) && a!=0&&b!=0)
    {
    d=0;
    for(i=a;i>=0;i--)
    {
    c=(a%10+b%10)/10;
    a=a/10;
    b=b/10;
    d=d+c;
    }
    if(d==0)
    printf("No carry operation.\n");
    else if(d==1)
    printf("1 carry operation.\n");
    else
    printf("%d carry operations.\n",d);
    }
return 0;
}
