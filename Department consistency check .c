#include <stdio.h>

int main(){
    int r,c,i,j,count=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    for(i=0;i<r;i++){
        int max=arr[i][0],min=arr[i][0];
        for(j=1;j<c;j++){
            if(arr[i][j]>max) max=arr[i][j];
            if(arr[i][j]<min) min=arr[i][j];
        }
        if(max-min<=1000) count++;
    }

    printf("%d",count);
    return 0;
}