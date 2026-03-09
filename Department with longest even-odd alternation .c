#include <stdio.h>

int main(){
    int r,c,i,j,index=0,max=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    for(i=0;i<r;i++){
        int len=1;
        for(j=1;j<c;j++){
            if((arr[i][j]%2)!=(arr[i][j-1]%2))
                len++;
            else
                break;
        }
        if(len>max){
            max=len;
            index=i;
        }
    }

    printf("%d",index);
}