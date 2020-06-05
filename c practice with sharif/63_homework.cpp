/// home work
/// ps 08 compare two big integer.......

/**
    123456789123456789123456789
    123456789123456789123456789

    123456789123456789123456789
    123456789123456789123456788

    123456789123456789123456788
    123456789123456789123456789

    1234567891234567891234567899
    123456789123456789123456789

*/
#include<stdio.h>
#include<string.h>

char func(char s[],int len) {
    int k=0;
    for(int i=0; i < len; i++) {
        if( s[i] == '0') {
            k++;
        } else
            break;
    }
    int c=0;
    for(int i=k; i<= len; i++) {
        s[c++] = s[i];
    }
    //error(s);
    //printf("%s\n", s);
    //return (s[]);
}
int main(){
    char s1[10000],s2[10000];

    while(scanf("%s%s",s1, s2)!=EOF){
        int len1 = strlen(s1);
        int len2 = strlen(s2);

        func(s1, len1);
        func(s2, len2);

        if(strcmp(s1,s2) == 0)
            printf("s1 = s2\n");
        else if(strcmp(s1,s2) > 0){
            printf("s1 > s2\n");
        }
        else if(strcmp(s1,s2) < 0){
            printf("s1 < s2\n");
        }
    }
    return 0;
}
