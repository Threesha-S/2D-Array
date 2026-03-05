#include <stdio.h>

int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    int maxUnique=0, index=0;
    for(int i=0;i<r;i++){
        int unique=0;
        for(int j=0;j<c;j++){
          int flag=1;
            for(int k=0;k<j;k++){
                if(a[i][j]==a[i][k]){
                    flag=0;
                    break;
                }
            }
            if(flag)
                unique++;
        }
        if(unique > maxUnique){
            maxUnique = unique;
            index = i;
        }
    }
    printf("%d",index);
}