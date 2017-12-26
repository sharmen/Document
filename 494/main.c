 #include<stdio.h>
#include<string.h>
int main()
{
   int i,l,w,c;
   char a[1000];
   while(gets(a))
   {
   l=strlen(a);
   c=0;
   for(i=0;i<l;i++)
   {
       w=0;
       while(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
       {
           i=i+1;
           w=1;
       }
   c=c+w;

   }
printf("%d\n",c);
   }
return 0;
}
