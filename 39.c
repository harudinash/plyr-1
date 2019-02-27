#include <stdio.h>

int main()
{
    int i,j=0,k=2,l,m[10000];
    printf("Input :");
    
    scanf("%d",&l);
    printf("Output :\n");
    
    for(i=0;i<10000;i++)
    {
        m[i]=k;
        k=k*2;
    }
    for(j=0;j<10000;j++)
    {
        if(l==m[j])
        {
            printf("yes");
            j=1;
            break;
        }
    }
    if(j==0)
    printf("no");
    if(l==1)
    printf("yes");
    return 0;
}
