#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,q,f[100],p,a,b[10000];
    char e[100],c[1000];
    printf("Input :\n");
   scanf("%d%d",&m,&n);
   for(i=0;i<m;i++)
   scanf("%d",&b[i]);
    printf("Output :\n");
   
   
   for(i=0;i<m;i++)
   {
       for(j=0;j<m;j++)
       {
           if(i!=j)
           {
               if(b[i]+b[j]==n)
               {
                   k=1;
               }
           }
       }
   }
   if(k==1)
   printf("yes");
   else
   printf("no");
    return 0;
}
