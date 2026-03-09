#include <stdio.h>

int main()
{
    int r,c,a[100][100];
    int i,j,sum,max=-9999,index=0;
    scanf("%d%d",&r,&c);
    for(i = 0;i < r;i++)
    {
        for(j = 0;j < c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j = 0;j < c;j++)
    {
        sum = 0;
        for(i = 0;i < r;i++)
        {
            sum += a[i][j];
        }
        if(sum > max)
        {
            max = sum;
            index = j;
        }
    }
    printf("%d", index);

    return 0;
}