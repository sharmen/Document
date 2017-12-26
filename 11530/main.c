#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,m,n,p,s,l;
    char c;
    char a[105];
    scanf("%d",&n);
    getchar();
   for(j=1;j<=n;j++)
   {
   m=0;
   gets(a);
   l=strlen(a);
  for(i=0;i<l;i++)
   {
    if(a[i]=='a'||a[i]=='d'||a[i]=='g'||a[i]=='j'||a[i]=='m'||a[i]=='p'||a[i]=='t'||a[i]=='w'||a[i]==' ')
    m=m+1;
    if(a[i]=='b'||a[i]=='e'||a[i]=='h'||a[i]=='k'||a[i]=='n'||a[i]=='q'||a[i]=='u'||a[i]=='x')
    m=m+2;
    if(a[i]=='c'||a[i]=='f'||a[i]=='i'||a[i]=='l'||a[i]=='o'||a[i]=='r'||a[i]=='v'||a[i]=='y')
    m=m+3;
    if(a[i]=='s'||a[i]=='z')
    m=m+4;
   }
printf("Case #%d: %d\n",j,m);
}
return 0;
}
