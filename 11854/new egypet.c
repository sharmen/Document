#include<stdio.h>
#include<math.h>
int main()
{
    int m,a,b,c,d;

    while(scanf("%d%d%d",&a,&b,&c))
    {
        if(a==0&&b==0&&c==0)
        break;
        if((a*a)==(b*b)+(c*c))
        printf("right\n");
        else if((b*b)==(a*a)+(c*c))
        printf("right\n");
        else if((c*c)==(a*a)+(b*b))
        printf("right\n");
        else
        printf("wrong\n");
       }
  return 0;
  }




