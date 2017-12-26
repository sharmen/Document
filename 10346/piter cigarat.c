#include<stdio.h>
int main()
{
    long n,a,b,i,j;
    while(scanf("%ld%ld",&a,&b)!=EOF)
    {
        n=a;
        while(a>=b)
        {

            i=a%b;
            j=a/b;
            if(i<=1)
            a=j;
            else
            a=j+i;
n=n+a;

}

    printf("%ld\n",n);

    }
return 0;
}
