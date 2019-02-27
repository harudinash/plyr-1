#include <stdio.h>

int main()
{
    int h,i,j=0,k,l,n=0,m[10000];
    printf("Input :");
    
    scanf("%d%d",&l,&k);
    printf("Output :\n");
    h=k;
    for(i=0;i<100;i++)
    {
        m[i]=k;
        k=k*h;
        //printf("k=%d",k);
    }
    for(j=0;j<100;j++)
    {
        if(l==m[j])
        {
            printf("yes");
            n=1;
            break;
        }
    }
    if(n==0)
    printf("no");
    if(l==1)
    printf("yes");
    return 0;
}
