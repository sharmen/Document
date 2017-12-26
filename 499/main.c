#include <stdio.h>
#include<string.h>
int main()
{
    long int c[200],i,j,m,n,l,a,ch,max;
    char s[100];
    while(gets(s))
    {
      for(i=0;i<200;i++)
    {
        c[i]=0;
    }
        max=0;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        ch=(s[i]);
        c[ch]=c[ch]+1;
    }
    for(i=65;i<123;i++)
    {
        if(c[i]>max)
        {
        max=c[i];
        }
    }
    for(i=65;i<123;i++)
    {
        if(max==c[i])
        printf("%c",i);
    }
    printf(" %ld\n",max);
}
    return 0;
}
