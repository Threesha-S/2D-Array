#include <stdio.h>

int main(){
    int r,c,i,j,k,l;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            int count=0;
            for(k=0;k<r;k++)
                for(l=0;l<c;l++)
                    if(arr[i][j]==arr[k][l]) count++;
            if(count==1){
                printf("%d",arr[i][j]);
                return 0;
            }
        }
    }
}