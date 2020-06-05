/// 59 string copy
/// array = asign dia assign kora jai na.

#include<stdio.h>
//#include<string.h>

int main() {
    char s[100], s1[100];

    scanf("%s",s);

//    for(int i=0;i<'\0';i++){
//        s1[i]=s[i];
//    }
    int i;
    for(i=0; s[i]!='\0'; i++) {
        s1[i]=s[i];

        //i++;

    }
    s1[i]=s[i];

    printf("%s\n",s1);

    char st[100], st1[100];
    scanf("%s",st1);


    i=0;
    while(1){
            st[i] = st1[i];
            if(st1[i] == '\0'){
                break;
            }
            i++;

    }
    printf("%s\n", st);



    return 0;
}
