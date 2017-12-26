#include<stdio.h>
#include<string.h>
main()
{
    char c[105][105];
    int i,j,k=1,l,m,n;
    while(1)
    {
    scanf("%d %d",&n,&m);
    if(n==0&&m==0)
   return 0;
    for(i=0;i<n;i++)
        scanf("%s",c[i]);
        for(j=0;j<103;j++)
        c[i][j]='.';
        if(k>1)
        printf("\n");
        printf("Field #%d:\n",k);
        k++;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {

                if(c[i][j]=='*')
                printf("*");
                else
                {
                    l=0;
                   if(i-1>=0)
                if(c[i-1][j]=='*')
                l++;
                if(c[i+1][j]=='*')
                l++;
                if(c[i][j+1]=='*')
                l++;
                if(j-1>=0)
                if(c[i][j-1]=='*')
                l++;
                if(i>=0&&j>=0)
                if(c[i-1][j-1]=='*')
                l++;
                if(c[i+1][j+1]=='*')
                l++;
                if(i>=0)
                if(c[i-1][j+1]=='*')
                l++;
                if(j>=0)
                if(c[i+1][j-1]=='*')
                l++;
                printf("%d",l);
                }
            }
            printf("\n");
        }
    }
}

