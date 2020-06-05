
/// 44 array declare and garbage...........
#include<stdio.h>
int main(){

    int a[5], i;

    a[0] = 2;
    a[1] = 3;
/// first 2 right value others are garbage......
    for(i = 0; i < 5; i++){
        printf("%d\n",a[i]);
    }
/// all are assign by value
    int ar[5] = {1, 2, 3, 4};

    for(i = 0; i < 5; i++){
        printf("%d\n", ar[i]);
    }

/// all are zero (0)
    int arr[5] = {};

    for(i = 0; i < 5; i++){
        printf("%d\n", arr[i]);
    }


    return 0;

}
