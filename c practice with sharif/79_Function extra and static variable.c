/// 79 function extarn and static variable

#include<stdio.h>

/**
int add(int a, int b){

    extern int c; ///global kotai declare korsi vule gele
    c = a+b;

    return a+b;
}
int c;

int main(){

    printf("%d\n",c);
    add(5,6);
    printf("%d\n",c);


    return 0;
}

*/

int count(){
    static int n=0; /// static akbar e declare hoiye then joto bar call toto bar increment hobe
    n++;
    return n;
}
int main(){

    printf("%d\n",count());
    printf("%d\n",count());
    printf("%d\n",count());
    printf("%d\n",count());
    printf("%d\n",count());

    return 0;
}
