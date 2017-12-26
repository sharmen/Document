#include <stdio.h>
int main()
{
long int a, b, c,i,n;
scanf("%ld", &n);
   for(i=1;i<=n;i++)
    {
        if(n>0&&n<20)
        {
        scanf("%ld %ld %ld",&a,&b,&c);
        if( a+b>c && b+c>a && c+a>b)
        {
       if(a==b && b==c && c==a)
     {
     printf("Case %ld: Equilateral\n", i);
     }
     else if (a!=b && b!=c && c!=a)
    printf("Case %ld: Scalene\n", i);
    else if(a==b || b==c || c==a)
    printf("Case %ld: Isosceles\n", i);
    }
    else
   {
   printf("Case %ld: Invalid\n", i);
   }
   }
   }
    return 0;
    }


