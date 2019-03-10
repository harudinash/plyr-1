#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,p,a;
    
    printf("Input :\n");
    scanf("%",&a);
    printf("Output :\n");
    
    if((a>-2147483648)&&(a<2147483647))
    printf("INT");
    else
    printf("LONG");
    return 0;
}
