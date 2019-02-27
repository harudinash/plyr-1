/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int h,i,j=0,k,l,n=0,m[10000];
    printf("Input :");
    
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&m[i]);
    }
    printf("Output :\n
        for(j=i+1;j<l");
    
    for(i=0;i<l;i++)
    {;j++)
        {
            if(m[i]>m[j])
            {
                
            printf("no");
            
            n=1;
            break;
            }
            
        }
    }
    if(n==0)
    printf("yes");
    return 0;
}
