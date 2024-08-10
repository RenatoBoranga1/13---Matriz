#include <stdio.h>

int main() {
    int i1, j1, i2, j2, i, j, k, M1[50][50], M2[50][50], M3[50][50];
    scanf("%d%d", &i1,&j1);

    for (i=0; i<i1; i++) {
        for(j=0; j<j1; j++) {
            scanf("%d", &M1[i][j]);
        }
    }
    scanf("%d%d", &i2,&j2);

    for (i=0; i<i2; i++) {
        for (j=0; j<j2; j++) {
            scanf("%d", &M2[i][j]);
        }
    }
    for (i=0;i<i1; i++) {
        for (j=0; j<i1; j++) {
            for (k=0; k<j1; k++) {
                M3[i][j] = M3[i][j] + (M1[i][k] * M2[k][j]);
            }
        }
    }

    for (i=0; i<i1; i++) {
        for (j=0; j<j2; j++) {
            printf("%d\t", M3[i][j]);
        }
        printf("\n");
    }
    return(0);
}