#include<stdio.h>
int main()
{
    long int i,y,fib[100000],s[100000];
    while(scanf("%ld",&y)!=EOF)
    {
       if(y<0)
       break;
       fib[0]=0;
       fib[1]=1;
       s[0]=1;
       for(i=2;i<=y+1;i++)
       {
           fib[i]=fib[i-1]+fib[i-2];
       }
    for(i=1;i<=y;i++)
    {
        s[i]=s[i-1]+fib[i+1];
    }
   printf("%ld %ld\n",s[y]-fib[i],s[y]);
    }
return 0;
}
