#include <stdio.h>

int main()
{
   int i,j,k,l,x;
   char a[100000],b[100000];
   printf("Input :\n");
   scanf("%s%s %d",a,b,&x);
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
       if(l==x)
       {
           printf("yes");
          
       }
       else
       printf("no");
   }

    return 0;
}
