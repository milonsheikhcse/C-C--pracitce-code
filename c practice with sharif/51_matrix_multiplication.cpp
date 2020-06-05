

/// 51 two dimension array multiplication.........

#include<bits/stdc++.h>

using namespace std;

int main() {

    int a[10][10], b[10][10], c[10][10];
    int c1,r1,c2,r2;

    ///give a matrix num. of row & col // row & col

    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);

/// a matrix

    for(int i=1; i<=r1; i++) {
        for(int j=1; j<=c1; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");
    for(int i=1; i<=r1; i++) {
        for(int j=1; j<=c1; j++) {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
    printf("\n");

/// b matrix
    for(int i=1; i<=r2; i++) {
        for(int j=1; j<=c2; j++) {
            scanf("%d",&b[i][j]);

        }
    }

    printf("\n");
    for(int i=1; i<=r2; i++) {
        for(int j=1; j<=c2; j++) {
            printf("%d ",b[i][j]);

        }
        printf("\n");
    }
    printf("\n");

/// result matrix
    int sum;
    for(int i=1; i<=3; i++) {
        for(int j=1; j<=3; j++) {
            sum =0;
            for(int k=1; k<=3; k++) {
                sum = sum + a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
    printf("\n");
    if(c1==r2) {
        for(int i=1; i<=r1; i++) {
            for(int j=1; j<=c2; j++) {
                printf("%d ",c[i][j]);

            }
            printf("\n");
        }
    } else {
        printf("Not possibl3\n");
    }




    return 0;
}
