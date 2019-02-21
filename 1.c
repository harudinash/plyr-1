#include <stdio.h>

int main()
{
   int i,j,k;
   char a[100000];
   printf("Input:\n");
   gets(a);
   printf("\nOutput:\n")
   for(i=0;a[i]!='\0';i++);
   for(j=i;j>=0;j--)
   {
       printf("%c",a[j]);
   }

    return 0;
}
