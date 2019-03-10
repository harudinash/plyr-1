#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,q,f[10000],p,a,b[10000];
    char e[100],c[1000];
    printf("Input :\n");
   scanf("%d",&n);
   /*for(i=0;i<n;i++)
   scanf("%d",&b[i]);*/
   for(i=0;i<n;i++)
           scanf("%d",&f[i]);
   
    printf("Output :\n");
   
   
   for(i=0;i<n;i++)
   {
       if(f[i]<n)
       {
           printf("%d ",f[i]);
       }
   }
    return 0;
}
