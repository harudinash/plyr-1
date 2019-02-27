#include <stdio.h>

int main()
{
    int i,j,k,l,n;
    long m;
    char a[10000],b[10000];
    printf("Input :\n");
    scanf("%d%d",&m,&n);
    printf("Output :\n");
    
    while(m)
    {
        l=m%10;
        if(l==n)
        {
            k++;
        }
       // printf("l=%d ",l);
        m=m/10;
    }
    printf("%d",k);
    return 0;
}
