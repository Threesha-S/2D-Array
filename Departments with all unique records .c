#include <stdio.h>

int main(){
    int r,c,i,j,k,count=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    for(i=0;i<r;i++){
        int unique=1;
        for(j=0;j<c;j++){
            for(k=j+1;k<c;k++){
                if(arr[i][j]==arr[i][k]){
                    unique=0;
                    break;
                }
            }
            if(!unique) break;
        }
        if(unique) count++;
    }
    printf("%d",count);
}