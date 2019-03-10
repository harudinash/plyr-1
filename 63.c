#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,q,f[10000],p,a,b[10000];
    char e[100],c[1000];
    printf("Input :\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&b[i]);
   for(i=0;i<n;i++)
   scanf("%d",&f[i]);
   
    printf("Output :\n");
   
   for(i=0;i<n;i++)
   {
       m=0;
       for(j=0;j<n;j++)
       {
           if(b[i]==f[j])
           {
               m=1;
               k=i;
           }
       }
       if(m==1)
       printf("%d ",b[k]);
   }
   
   
    return 0;
}
