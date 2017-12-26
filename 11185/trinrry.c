#include<stdio.h>
int main()
{
  long int i,m,n,s,t,a[1000];
    while(scanf("%ld",&n))
    {
        if(n<0)
        break;
        if(n==0)
        printf("0");
        m=n;
        t=0;
        while(n>0)
        {
          s=n%3;
          t++;
          n=n/3;
        }
    for(i=1;i<=t;i++)
    {
     s=m%3;
     a[i]=s ;
     m=m/3;
    }
 for(i=t;i>=1;i--)
 {
     printf("%ld",a[i]);
 }

    printf("\n");
    }
return 0;
}
