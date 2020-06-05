
/// 71 pointer closer look 2....

#include<stdio.h>
int main() {
    /// int *p = 10; /// wrong declaration and assign....

    /// int *p = &x, x; /// wrong declaration and assign....
    /// *p = x

    int x=10, *p = &x; /// right........
    *p = x;
    printf("%d\n", *p);

    char c, *pc = &c;
    int a, *pa = &a;
    float f, *pf = &f;
    double d, *pd = &d;

    printf("%p\n", pa); /// pa er address dekhabe;
    printf("%d %d %d %d\n", pc, pa, pf, pd);// all address

    pc++; /// character 1 byte barbe
    pa++; /// integer 4 byte
    pf++; /// float 4 byte
    pd++; /// double 8 byte

    printf("%d %d %d %d\n", pc, pa, pf, pd);// all address

    int a2 = 5, *p2 = &a2;
    printf("%d %d %d\n",a2, *p2, p2 );
    //*p2++; /// *p2 er vlaue garbase asbe...
   // printf("%d %d %d\n",a2, *p2, p2 );
    (*p2)++;/// value a2, *p2 -> 1 increase
    printf("%d %d %d\n",a2, *p2, p2 );





    return 0;
}
