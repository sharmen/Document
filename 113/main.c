#include<stdio.h>
#include<math.h>
int main()
 {
    double n,p,k;
    while(scanf("%lf%lf",&n,&p)!=EOF)
   {
       if(n<0 && p<0)
       break ;
       k=exp((log(p))/n);
       printf("%.0lf\n",k);
    }
    return 0;
}
