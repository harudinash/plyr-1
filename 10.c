#include <stdio.h>

int main()
{
   int i,j,k,l;
   char a[100000],b[100000];
   printf("Input :\n");
   scanf("%s%s",a,b);
   printf("Output :\n");
   for(i=0;a[i]!='\0';i++);
   j=i;
   for(i=0;b[i]!='\0';i++);
   if(i==j)
   {
       for(k=0;k<i;k++)
       {
           if(a[k]!=b[k])
           {
               l++;
           }
       }
       if(l==1)
       {
           printf("yes");
          
       }
       else
       printf("no");
   }

    return 0;
}
