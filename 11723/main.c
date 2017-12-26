#include <stdio.h>
int main()
 {
 int r,n,c,m,i,s,t=1;
 while(scanf("%d %d", &r, &n))
 {
  if(r==0&&n==0)
  break;
  printf("Case %d: ",t);
  t++;
  s = (r-1)/n;
  if(s > 26)
  printf("impossible\n");
  else
 printf("%d\n", s);
 }
 return 0;
}
