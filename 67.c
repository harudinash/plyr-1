#include <stdio.h>

int main()
{
    int i,j,k=1,l;
    printf("Input :\n");
    scanf("%d",&l);
    printf("Output :\n");
    while(l)
    {
        k=k*l;
        l--;
    }
printf("%d",k);
    return 0;
}
