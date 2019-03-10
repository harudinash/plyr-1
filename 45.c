#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,p,a;
    
    printf("Input :\n");
    scanf("%d%d",&p,&a);
    printf("Output :\n");
    m=p/2;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i*j==a)
            {
                //printf("yes");
                n=1;
                break;
            }
        }
    }
    if(n==1)
    printf("yes");
    else
    printf("no");

    return 0;
}
