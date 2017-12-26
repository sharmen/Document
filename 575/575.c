#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
long int n,i,sum;
char s[100];
while(gets(s))
{
sum=0;
n=strlen(s);
for(i=0;i<n;i++)
{
 sum=sum+(s[i]-48)*(pow(2,n-i)-1);
}
if(sum==0)
break;
printf("%ld\n",sum);
}
return 0;
}
