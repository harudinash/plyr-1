#include <stdio.h>

int main()
{
   int i,j,k;
   char a[100000];
   gets(a);
   for(i=0;a[i]!='\0';i++);
   for(j=i;j>=0;j--)
   {
       printf("%c",a[j]);
   }

    return 0;
}
