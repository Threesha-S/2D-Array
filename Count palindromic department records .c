#include <stdio.h>

int main()
{
    int r,c,a[100][100];
    int i,j,count = 0, flag;
    scanf("%d%d",&r,&c);
    for(i = 0;i < r;i++)
    {
        for(j = 0;j < c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0;i < r;i++)
    {
        flag = 1;
        for(j = 0; j < c/2; j++)
        {
            if(a[i][j] != a[i][c-j-1])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            count++;
    }
    printf("%d", count);

    return 0;
}