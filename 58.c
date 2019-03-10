#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,p,a,b[10000];
    char e[100],c[1000];
    printf("Input :\n");
    gets(c);
    scanf("%s",e);
   // scanf("%s",e);
    printf("Output :\n");
    
    for(j=0;c[j]!='\0';j++);
    
    for(i=0;i<j;i++)
    {
        if(c[i]==e[0])
        
        {
            for(k=0;e[k]!='\0';k++)
            {
                if(c[i+k]==e[k])
                {
                    n=1;
                    
                }
                else
                {
                    n=0;
                    break;
                }
            }
             if(n==1)
            p++;
        }
       
    }
   printf("%d",p);
    
   
    
    return 0;
}
