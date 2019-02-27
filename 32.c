#include<stdio.h>

int main() {
   int i,j,k,l,x[100000];
   char a[10000];
   printf("Input :\n");
   //gets(a);
   scanf("%d%d",&k,&l);
   for(i=0;i<k;i++)
   scanf("%d",&x[i]);
   printf("Output :\n");
   
   for(i=0;i<k;i++)
   {
       if(x[i]==l)
      { printf("yes");
       break;
      }
   }
}
