#include <stdio.h>
int main()
{
    long i,j,c,k,r,t,max,a,b,h;
    while(scanf("%ld%ld",&i,&j))

    {
       if(i==0&&j==0)
       break;
        if(i>j)
        {
        h=i;
        i=j;
        j=h;
        }
    max=0;
    for(k=i;k<=j;k++)
    {
        c=0;r=k;
        do
        {
            if(r%2==0)
            r=r/2;
            else
            r=3*r+1;
            c++;
       if(max<c)
        {
        max=c;
        t=k;
        }
        }
        while(r>1);
}
   printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n",i,j,t,max);
    }
    return 0;
}
