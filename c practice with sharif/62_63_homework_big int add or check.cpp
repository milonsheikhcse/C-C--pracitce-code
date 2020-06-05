/// big int.......>, < , == ;
/// 62 home............
///1. two string equal or not
///2. kon ta boro or choto print...
///
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
#include<bits/stdc++.h>
using namespace std;

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

int main() {

    char s1[100], s2[100];

    while(scanf("%s%s",s1,s2)) {
        int len1 = strlen(s1);

        int len2 = strlen(s2);

        func(s1, len1);
        func(s2, len2);

        printf("%s\n", s1);
        printf("%s\n", s2);

        len1 = strlen(s1);
        len2 = strlen(s2);
        int m=0;
//error(len1, len2);
        if(len1 == len2) {
            for(int j = 0; j < len1; j++) {
                if(s1[j] == s2[j]) {
                    m++;
                } else if(s1[j] > s2[j]) {
                    printf("s1 > s2\n");
                    break;
                } else {
                    printf("s1 < s2\n");
                    break;
                }
            }
            if(m==len1) {
                printf("s1==s2\n" );
            }
            //error(len1, len2);
        }

        else if (len1 < len2) {

            printf("this`s why : s1:%d < s2:%d\n", len1, len2);
            //error(len1, len2);
        } else {
            printf("s1 > s2\n");
        }
    }


    /**
        00001
        s1[0]

        while(scanf("%s%s",s1,s2)) {
            printf("%s compare  %s\n", s1, s2);
            bool flag = false;
            for( int i=0;  s1[i]!='\0' || s2[i] !='\0';   i++ ) {
                if(s1[i] != s2[i]) {
                    flag = true;
                    break;
                }
            }

            if(flag) {
                printf("Not equal \n");
            } else
                printf("equal \n");


            printf("%s small || big check  %s\n", s1, s2);
            int len1 = strlen(s1);
            int len2 = strlen(s2);

            if(len1 > len2) {
                printf("big s1 = %s \n", s1);
            } else if( len1 < len2 ) {
                printf("big s2 = %s\n", s2);
            } else {
                for( int i=0; i< len1; i++) {
                    if(s1[i] > s2[i]) {
                        printf("big s1 = %s \n", s1);
                        break;
                    }

                    else if(s1[i] < s2[i]){
                        printf("big s2 = %s\n", s2);
                        break;
                    }
                    else if(s1[i]==s2[i])
                    {
                        printf("equal\n");
                        break;
                    }

                }
            }

        }
        /**

        case: 1
        0123
        123
        wrong show

        case: 2
        123
        0000
        wrong show



        */


    return 0;
}
