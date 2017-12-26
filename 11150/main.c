#include<stdio.h>
int main()
{
long n,b;
while(scanf("%ld",&n)!=EOF)
{
b=n+(n/2);
printf("%ld\n",b);
}
return 0;
}
