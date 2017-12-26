#include<stdio.h>
int main()
{
  long long  int i,j,m,n,a,b,c,d;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        if(a+b+c>=d&&a+b+d>=c&&b+c+d>=a&&b+c+a>=d&&c+d+a>=b)
        {
            if((a==b&&c==d)||(b==c&&d==a)||(a==c&&b==d))
            {
             if(a==b&&a==c&&a==d&&b==c&&b==d&&c==d)
              printf("square\n");
              else
              {
               printf("rectangle\n");
              }
            }
            else
            printf("quadrangle\n");
            }
         else
         printf("banana\n");
        }
        return 0;
    }
