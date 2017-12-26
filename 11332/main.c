#include <stdio.h>
int main()
{
   long int i,s,n,m,d;
   while(scanf("%ld",&n))
   {
       if(n==0)
       break;
       if(n<10)
       printf("%ld\n",n);
       if(n>9)
       {
           while(n>9)
           {
               s=0;
               while(n>0)
               {
                m=n%10;
                n=n/10;
                s=s+m;
               }
               n=s;
           }
           printf("%ld\n",s);
       }
   }
   return 0;
}
