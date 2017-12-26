#include <stdio.h>
#include <string.h>
int main()
{
    int l=0;
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch=='"')
        {
            if(l==0)
            {
                printf("``");
                l=1;
            }
            else
            {
            printf("''");
            l=0;
            }
        }
        else
        printf("%c",ch);
    }
    return 0;
}
