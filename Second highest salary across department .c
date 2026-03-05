#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int salary[R][C];
    int max1 = -1, max2 = -1;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &salary[i][j]);
        }
    }    
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            int val = salary[i][j];
            if(val > max1) {
                max2 = max1;
                max1 = val;
            }
            else if(val > max2 && val != max1) {
                max2 = val;
            }
        }
    }

    printf("%d", max2);

    return 0;
}