/// 46 linear search

#include<stdio.h>

int main(){

    int a[10], i;

    printf("input array value\n");

    for(i = 0; i<10; i++){
        scanf("%d", &a[i]);
    }


    int item;
    printf("search value\n");
    scanf("%d", &item);

    for(i=0; i<10; i++){
        if(a[i] == item){
            printf(" index = %d , value = %d\n",i, item);
        }
    }

    return 0;

}
