#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[5][5];

    for(int i=0; i<5; i++){
        for(int j=0;j<5;j++){

            scanf("%d",&a[i][j]);
        }
    }

    printf("2d array output \n");

    for(int i=0; i<5; i++){
        for(int j=0;j<5;j++){

            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

return 0;}
