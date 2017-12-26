#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=1;
    double s,u,v,a,t;
        while(scanf("%d",&n))
        {
        if(n==0)
        break;
        if(n==1)
        {
        scanf("%lf %lf %lf",&u,&v,&t);
        a=(v-u)/t;
        s=(u*t)+0.5*a*t*t;
        printf("Case %d: %.03f %.03f\n",c,s,a);
        }
        if(n==2)
        {
            scanf("%lf%lf%lf",&u,&v,&a);
            t=(v-u)/a;
            s=(u*t)+0.5*a*t*t;
            printf("Case %d: %.03lf %.03f\n",c,s,t);
        }
        if(n==3)
        {
            scanf("%lf%lf%lf",&u,&a,&s);
            v=sqrt((u*u)+(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.03lf %.03lf\n",c,v,t);
        }
        if(n==4)
        {
            scanf("%lf%lf%lf",&v,&a,&s);
            u=sqrt((v*v)-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.03lf %.03lf\n",c,u,t);
        }
        c++;
        }
    return 0;
}
