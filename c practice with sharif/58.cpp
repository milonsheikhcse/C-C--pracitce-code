
/// calculate the length of a string...
/// library function : strlen(string);

#include<stdio.h>

int main(){
    char ch[100];

    scanf("%[^\n]",ch);

    int i=0;

    while(ch[i]!='\0'){
        i++;             /// length count of string.
    }
    int len = i;
    printf("%d\n",len); /// output the length.


return 0;}
