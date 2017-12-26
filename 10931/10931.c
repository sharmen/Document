#include<stdio.h>
int main()
{
 long int i,m,n,l,s,a[100],p,k;
while(scanf("%ld",&n))
{
   if(n==0)
   break;
    m=n;
    k=0;
    p=0;
    while(n>0)
    {
        s=n%2;
        k++;
        n=n/2;
     if(s==1)
     p++;
     }

  for(i=0;i<k;i++)
  {
   s=m%2;
   a[i]=s;
   m=m/2;
  }
 printf("The parity of ");
for(i=k-1;i>=0;i--)
{
  printf("%d",a[i]);
}
printf(" is %d (mod 2).\n",p);
}
return 0;
}
