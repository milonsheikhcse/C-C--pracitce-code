/// pointer closer look 1

#include<stdio.h>
int main(){

    int x, y;
    int *p, *q;

    p = &x;
    q = &y;

    x = 1;
    y = 2;

    printf("%d %d %d %d\n", *p,x,*q,y);

    p = q; /// p = q = &y ; y = 2, x =1

    printf("%d %d %d %d\n",*p,x,*q,y);

    x = 12;
    y = 15; /// p = q = &y; y = 15, x 12
    printf("%d %d %d %d\n",*p,x,*q,y);




return 0;
}
