#include <stdio.h>

int main()
{
    int i,j,k=1,l,a[10000];
    printf("Input :\n");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    scanf("%d",&a[i]);
    printf("Output :\n");
   
   for(i=0;i<l-1;i++)
   {
       if(a[i]>=a[i+1])
       printf("%d ",a[i]);
       else
       printf("%d ",a[i+1]);
   }
   
    return 0;
}
