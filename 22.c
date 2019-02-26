#include <stdio.h>

int main()
{
    int i,j,k,l,a,b;
    printf("Input :\n");
    scanf("%d%d",&a,&b);
    printf("Output :\n");
    if(a>b)
    i=a;
    else
    i=b;
    for(j=1;j<=i;j++)
    {
        if((a%j==0)&&(b%j==0))
        k=j;
    }
printf("%d",k);
    return 0;
}
