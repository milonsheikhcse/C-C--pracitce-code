
///68 check a string is palindrome or not..

#include<stdio.h>
#include<string.h>

int main() {

    char ch[100];
    int i,j, len;

    // ;

    while(scanf("%s", ch) !=EOF) {
        len = strlen(ch);

        int flag =0 ;
        for(i=0,j=len-1; i<(len/2); i++,len--) {
            if(ch[i] != ch[j]) {
                flag = 1;
                break;
            }
        }
        if(flag) {
            printf("not palindorm\n");
        } else {
            printf("palindorme\n");
        }
    }
    return 0;
}
