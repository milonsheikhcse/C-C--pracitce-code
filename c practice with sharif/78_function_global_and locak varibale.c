
///78 function global and local variable

#include<stdio.h>

int  c;  /// global variable.............

int add(int a, int b){

    int res;                /// local variable

    res = a + b;
    c = b;             ///global variable
    return res;

}

int abs(int a, int b){

    int ab;
    ab = a<0 ? -a:b;

    return ab;
}

/// conflict == mane dondo..
int main(){
    int res;

    res = add(5,6);
    printf("%d %d",res,c); /// res == global ///c==global;

    return 0;
}
