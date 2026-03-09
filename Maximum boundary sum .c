#include <stdio.h>

int main(){
    int r,c,i,j,sum=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    for(j=0;j<c;j++) sum+=arr[0][j];
    for(j=0;j<c;j++) sum+=arr[r-1][j];
    for(i=1;i<r-1;i++){
        sum+=arr[i][0];
        sum+=arr[i][c-1];
    }
    printf("%d",sum);
    return 0;
}