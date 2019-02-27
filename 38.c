#include <stdio.h>

int main()
{
    int i,j,k,l,n;
    long m;
    char a[10000],b[10000];
    printf("Input :\n");
    scanf("%d",&m);
    printf("Output :\n");
    
    for(i=2;i<=m;i++)
    {
        if(m%i==0)
        {
            if(i%2==0)
            printf("%d ",i);
        }
    }
    return 0;
}
