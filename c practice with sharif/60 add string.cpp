/// 60 string add.............

#include<stdio.h>
#include<string.h>


int main() {
//
//    char s[1002], s1[10];
//    scanf("%s%s",&s,&s1);
//
//    int len = strlen(s);
//    s[len]=' ';
//    len++;
//    //printf("%d\n",len);
//    int i;
//    for(i=0; s1[i]!='\0'; i++) {
//        s[len+i]=s1[i];
//        //len++;
//    }
//    s[len+i]=s1[i];
//
//    printf("%s\n",s);

    char s[100],s1[100];

    scanf("%s%s",&s,&s1);

    int len = strlen(s);
    s[len]=' ';
    len++;



    int i;

    for( i=0;s1[i]!='\0';i++){
        s[len+i]=s1[i];
    }
    s[len+i]=s1[i];

    printf("%s\n",s);

    return 0;
}
