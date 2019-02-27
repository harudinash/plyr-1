#include<stdio.h>

int main() {
   int i,j,k,l;
   char a[10000];
   printf("Input :\n");
   gets(a);
   printf("Output :\n");
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]=='(')
       k++;
       if(a[i]==')')
       k--;
   }
   if(k==0)
   printf("yes");
   else
   printf("no");
}
