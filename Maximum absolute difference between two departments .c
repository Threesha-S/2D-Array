#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,a[100][100],i,j,k,l,max=0,diff;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            for(k=i+1;k<r;k++)
                for(l=0;l<c;l++)
                {
                    diff=abs(a[i][j]-a[k][l]);
                    if(diff>max)
                        max=diff;
                }

    printf("%d",max);
    return 0;
}