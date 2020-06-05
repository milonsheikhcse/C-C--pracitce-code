
/// 61 compare two strings are same or not......

#include<stdio.h>
#include<string.h>


int main() {

    char s[100], s1[100];
    int i=0;

    scanf("%s%s",&s,&s1);

//    int lens = strlen(s);
//    int lens1 = strlen(s1);
//
//    int i;
//    if(lens == lens1){
//        for(i =0;s[i]!='\0';i++){
//                if(s[i]==s1[i]){
//                    printf("Not same\n");
//                    return 0;
//                }
//
//        }
//        printf("Same string\n");
//    }
//    else{
//        printf("Not same\n");
//    }
    bool check=false;
    while(s[i]!='\0' || s1[i]!='\0') {
        if(s[i]!=s1[i]) {
            check = true;
            break ;
        }
        i++;
    }
    if(check) {
        printf("Not same\n");
    } else
        printf("Same\n");

    return 0;
}

