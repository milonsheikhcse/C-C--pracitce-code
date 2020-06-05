/// 45 array traversing

#include<stdio.h>

int main(){

    int a[10] = {2,3,4,5,6,7,8,9,1,10}, i;


    for(i=0; i<10; i++){     /// sob item duka mane traverse kora
        printf("%d\n", a[i]);
    }

    for(i=9; i>=0; i--){  ///last dik sob item duka mane o traverse kora
        printf("%d ", a[i]);
    }

    return 0;

}
