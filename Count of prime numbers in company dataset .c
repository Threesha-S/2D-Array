#include <stdio.h>

int prime(int n)
{
    int i;
    if(n < 2) return 0;
    for(i = 2; i <= n/2; i++)
        if(n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int r,c,a[100][100],i,j,count=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(prime(a[i][j]))
                count++;
    printf("%d",count);
    return 0;
}
