#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,p,a,b[10000];
    char e,c[1000];
    printf("Input :\n");
    gets(c);
    scanf("%c",&e);
   // scanf("%s",e);
    printf("Output :\n");
    
    for(j=0;c[j]!='\0';j++);
    for(i=0;i<j;i++)
    {
        if(c[i]==e)
        {
            k++;
        }
    }
   printf("%d",k);
    
   
    
    return 0;
}
