#include <stdio.h>

int main()
{
    int i,j,k,l,c,t,a,b,m[10000],n[10000];
    printf("Input :\n");
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    scanf("%d",&m[i]);
    for(i=0;i<b;i++)
    scanf("%d",&n[i]);
    printf("Output :\n");
    c=a+b;
    for(i=0;i<b;i++)
    {
        //a++;
        m[a]=n[l];
        l++;
        a++;
        for(j=0;j<a;j++)
        {
            k=m[0];
            for(t=0;t<a;t++)
            {
                if(m[t]>k)
                {
                    k=m[t];
                }
                
            }
           
        } printf("%d ",k);
    } 
    return 0;
}
