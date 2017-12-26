#include<stdio.h>
#include<math.h>
int main()
{
  int i;
  float d,v,u,t1,t2,p,test,r;
  scanf("%f",&test);
  for(i=1;i<=test;i++)
  {
      scanf("%f%f%f",&d,&v,&u);
      if(u==0||v==0||d<0||u<=v)
      printf("Case %d: can't determine\n",i);
      else
      {
          t1=d/u;
          p=(sqrt((u*u)-(v*v)));
          t2=d/p;
          r=t2-t1;
          printf("Case %d: %.03f\n",i,r);
      }
  }
  return 0;
}
