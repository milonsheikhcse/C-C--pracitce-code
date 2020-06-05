c/// 77 function prototype declaration and return value;

#include<stdio.h>

int abs(int a, int b);    /// function prototype
int add(int a, int b);    /// function prototype

int main() {

    printf("%d\n",abs(-5,-6)); /// function call


    return 0;
}

int abs(int a, int b) {     /// function declaration

    int add1 = add(a, b);

    if(add1 < 0) {
        return -add1;  /// -1*ad
    } else {
        return add1;
    }
}
int add(int a, int b) {  /// function definition

    return a+b;

}
