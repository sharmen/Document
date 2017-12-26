#include<stdio.h>
#include<math.h>
#define max 2000005
 long a[max],i,j,m,n,TEMP,k;
int main()
{

while(scanf("%ld",&n)!=EOF)
{
 if(n<=0)
 break;
 for(i=0;i<n;i++)
 {
     scanf("%ld",&a[i]);
     }
for(i=0;i<n;i++)
{
 for(j=0;j<n-1;j++)
 {
     if(a[j]>a[j+1])
     {
      TEMP=a[j];
     a[j]=a[j+1];
     a[j+1]=TEMP;
     }
     }
}
for(j=0;j<n;j++)
{
 printf("%ld",a[j]);
if(j<n-1)
printf(" ");
}
printf("\n");
}
return 0;
}
