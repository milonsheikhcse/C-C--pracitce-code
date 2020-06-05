/// 52 string basic dirrrence between char array & string....
/// output : milon
#include<stdio.h>

int main(){


    char ch[10];
    int i = 0;

    ch[0] = 'm';
    ch[1] = 'i';
    ch[2] = 'l';
    ch[3] = 'o';
    ch[4] = 'n';
    ch[5] = '\0'; /// ata string er ses abong ata terminator....
    ch[6] = ' ';
    ch[7] = ' ';
    ch[8] = '2';

/*
    while(ch[i] != '\0'){
        printf("%c",ch[i]);
        i++;
    }

*/
    printf("%s\n", ch);


    printf("\n");

    return 0;

}
