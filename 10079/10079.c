#include<stdio.h>
int main()
{
long int n,p;
while(scanf("%ld",&n)!=EOF)
{
if(n<0)
break;
p=((n*(n+1))/2)+1;
printf("%ld\n",p);
}
return 0;
}
