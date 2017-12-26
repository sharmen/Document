#include<stdio.h>
int main()
{
long int n,i,s;
printf("PERFECTION OUTPUT\n");
while(scanf("%ld",&n)!=EOF)
{
if(n==0)
{
printf("END OF OUTPUT\n");
break;
}
else
{
s=0;
for(i=1;i<n;i++)
{
if(n%i==0)
s+=i;
}
if(s==n)
printf("%5ld  PERFECT\n",n);
else if(s<n)
printf("%5ld  DEFICIENT\n",n);
if(s>n)
printf("%5ld  ABUNDANT\n",n);
}
}
return 0;
}
