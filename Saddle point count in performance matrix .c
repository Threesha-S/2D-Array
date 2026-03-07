#include <stdio.h>

int main()
{
    int r,c,i,j,k;
    int a[50][50];
    int count = 0;
    scanf("%d %d", &r, &c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            int isSmallest = 1;
            int isLargest = 1;
            for(k=0;k<c;k++)
                if(a[i][j] > a[i][k])
                    isSmallest = 0;
            for(k=0;k<r;k++)
                if(a[i][j] < a[k][j])
                    isLargest = 0;
            if(isSmallest && isLargest)
                count++;
        }
    }

    printf("%d",count);

    return 0;
}