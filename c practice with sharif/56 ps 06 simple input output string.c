/// ps 6

#include<stdio.h>

int main() {

    char str[100];

    gets(str);
    //puts(str);
    printf("%8.4s\n", str);

    printf("%*.*s\n",8,4,str);


    int w,d;
    printf("%*.*s\n",w,d,str);



    printf("\n");
    return 0;
}
