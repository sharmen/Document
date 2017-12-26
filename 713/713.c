#include<stdio.h>
#include<string.h>
main()
{
    int tc,i,l,x[205],y[205],k,l1,l2,imt=0,jj,j,xy[205],h=0;
    char a[205],b[205];
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        scanf("%s %s",a,b);
        l1=strlen(a);
        l2=strlen(b);
        for(j=0;j<l1;j++)
        x[j]=(int)a[j]-48;
        for(jj=0;jj<l2;jj++)
        y[jj]=(int)b[jj]-48;
        if(l1>l2)
        {
            for(k=jj;k<205;k++)
            y[k]=0;
        }
        else if(l1<l2)
        {
            for(k=j;k<205;k++)
            x[k]=0;
        }
            x[l1]=0;
            y[l2]=0;
        if(l1>l2)
        l2=l1;
        for(l=0;l<=l2;l++)
        {
            xy[l]=x[l]+y[l];
            if(xy[l]>9)
            {
            xy[l]=xy[l]-10;
            x[l+1]++;
            }
        }
        if(xy[l2]==0)
        l2=l2-1;
        for(l=0;l<=l2;l++)
        {
            if(xy[l]!=0)
            imt=imt+1;
            if(imt!=0)
        printf("%d",xy[l]);
        }
        imt=0;
        h=0;
        printf("\n");

    }
}
