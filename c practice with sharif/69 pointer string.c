/// pointer string

#include<stdio.h>
#include<string.h>

int main() {
    int a;

    int *p; /// *p = pointer variable jate int. typer address rakah jabe

    p = &a; ///p pointer &x ke nirdes korbe. p -> address variable// a er address p te rakhsi..

    *p = 5; /// *p=a... same type....

    printf(" address are same: %d \t %d\n", &a, p);
    printf(" value are same:   %d \t %d\n", a, *p);

    a = 9;  /// a te assign korle *p teo assign hoi...

    printf(" address are same: %d \t %d\n", &a, p);
    printf(" change value are same:  %d \t %d\n", a, *p);

    *p = 10; /// *p te assign korle a teo assign hoi..

    printf(" address are same: %d \t %d\n", &a, p);
    printf(" change value are same:  %d \t %d\n", a, *p);

    return 0;
}
