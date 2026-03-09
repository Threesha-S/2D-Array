#include <stdio.h>

int main(){
    int r,c,i,j,count=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    for(i=0;i<r;i++){
        int inc=1;
        for(j=1;j<c;j++){
            if(arr[i][j]<=arr[i][j-1]){
                inc=0;
                break;
            }
        }
        if(inc) count++;
    }
    printf("%d",count);
    return 0;
}