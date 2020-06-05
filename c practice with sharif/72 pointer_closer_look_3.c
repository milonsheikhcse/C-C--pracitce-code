
/// 72 pointer closer look 3
///advance

#include<stdio.h>
int main(){

    int *p, *q;
    int x,y;
    p = &x;
    x = 5;

    q = &(*(&x)); /// *(&x)==(*p)=value// &(*(&x)) ata address.
    *p = 10;
    printf("%d\n", *q);

    int arr[100]; /// arr = &arr[0];  arr is address....
    printf("%d %d\n", arr, &arr[0]);

    scanf("%d", &arr[0]); ///& dite hoi.......
    p = arr;

    printf("%d \n", *p);


return 0;
}
