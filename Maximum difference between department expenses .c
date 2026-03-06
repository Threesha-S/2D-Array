#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    int sum[r];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<r;i++)
    {
        sum[i]=0;
        for(int j=0;j<c;j++)
            sum[i]+=a[i][j];
    }
    int maxDiff=0;
    for(int i=0;i<r;i++)
    {
        for(int j=i+1;j<r;j++)
        {
            int diff=abs(sum[i]-sum[j]);
            if(diff>maxDiff)
                maxDiff=diff;
        }
    }

    printf("%d",maxDiff);

    return 0;
}