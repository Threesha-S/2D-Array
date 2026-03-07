#include <stdio.h>

int main()
{
    int r,c,i,j;
    int a[50][50];
    long long product, maxProduct;
    int index = 0;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    maxProduct = -999999;
    for(i=0;i<r;i++)
    {
        product = 1;
        for(j=0;j<c;j++)
            product *= a[i][j];
        if(product > maxProduct)
        {
            maxProduct = product;
            index = i;
        }
    }

    printf("%d",index);

    return 0;
}