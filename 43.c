#include <stdio.h>

int main()
{
   
   int i,j,k,l,m,n,a[10000],b[10000];
   char x[1000],y[1000],z[1000];
   printf("Input :\n");
   gets(x);
   gets(y);
   printf("Output :\n");
   for(i=0;x[i]!='\0';i++);
   for(j=0;y[j]!='\0';j++);
  // printf("%d %d\n",i,j);
   for(k=1;k<i;k++)
   {
       
       if(x[k]==y[0])
       {
           m=0;
           for(l=0;l<j;l++)
           {
    //           printf("x=%c y=%c ",x[k],y[l]);
               if(x[k]!=y[l])
               {
                   //printf("no");
                   k=i;l=j;
                   m=1;
                   break;
               }
               k++;
               
           }
       }
       else 
       m=1;
   }
   if(m==0)
   {
       printf("yes");
   }
  else
  printf("no");
  
    return 0;
}
