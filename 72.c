#include <stdio.h>

int main()
{
    int i,j,k=1,l,a[10000],m;
    printf("Input :\n");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    scanf("%d",&a[i]);
    printf("Output :\n");
   
   for(i=0;i<l;i++)
   {
       if(a[i]>m)
       m=a[i];
   }
   
   printf("%d",m);
    return 0;
}
