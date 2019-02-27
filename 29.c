#include <stdio.h>

int main()
{
    int i,j,k,l,x,y;
    char a[10000];
    printf("Input :\n");
    scanf("%d%d",&x,&y);
    printf("Output :\n");
    
    for(i=x;i<=y;i++)
    {
        if(i*i<=y)
        k++;
    }
    printf("%d",k);
    return 0;
}
