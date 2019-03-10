#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,p,a;
    
    printf("Input :\n");
    scanf("%d%d%d",&a,&p,&n);
    printf("Output :\n");
    
    if((a>0)&&(p>0)&&(n>0)&&(a+p+n==180))
    printf("yes");
    else
    printf("no");
    return 0;
}
