#include <stdio.h>

int main()
{
   int i,j,k=0,l;
   char a[100000],b[100];
   printf("Input :\n");
   gets(a);
   printf("Output :\n");
   for(i=0;a[i]!='\0';i++)
   {
       j=i+1;
       b[k]=a[i];
       a[i]=a[j];
       i++;
       a[j]=b[k];
   }
for(i=0;a[i]!='\0';i++)
{
    printf("%c",a[i]);
}
    return 0;
}
