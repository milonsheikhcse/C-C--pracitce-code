
/// function use of pointer..

#include<stdio.h>

void inc(int *a){
    printf("function1 inc : %d\n",*a);
    (*a)++;
    printf("function2 inc : %d\n",*a);
}

int main(){

    int a = 5;
    printf("Before inc : %d\n",a);
    inc(&a);
    printf("after inc : %d\n",a);


return 0;}
