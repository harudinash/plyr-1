#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,q,f[10000],p,a,b[10000];
    char e[100],c[1000];
    printf("Input :\n");
   scanf("%d%d",&n,&p);
   /*for(i=0;i<n;i++)
   scanf("%d",&b[i]);
   for(i=0;i<n;i++)
           scanf("%d",&f[i]);   */
   gets(c);
    printf("Output :\n");
   strcpy(e,"Answer");
   for(i=0;c[i]!='\0';i++);
   c[i]=' ';
   for(j=i+2;j<i+8;j++)
   {
       c[j]=e[p];
       p++;
   }
   
   for(i=0;i<j;i++)
   printf("%c",c[i]);
    return 0;
}
