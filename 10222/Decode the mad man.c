#include <stdio.h>
int main()
{
   char a[]="`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./",c;
   int i;
   while(scanf("%c",&c)!=EOF)
   {
      for(i=0;i<47;i++)
      {
         if(c==a[i])
         {
            c=a[i-2];
         }
      }
     printf("%c",c);
   }
   return 0;
}
