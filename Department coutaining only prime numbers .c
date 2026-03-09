#include <stdio.h>

int isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return 0;
    return 1;
}
int main(){
    int r,c,i,j,count=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    for(i=0;i<r;i++){
        int prime=1;
        for(j=0;j<c;j++){
            if(!isPrime(arr[i][j])){
                prime=0;
                break;
            }
        }
        if(prime) count++;
    }
    printf("%d",count);
    return 0;
}