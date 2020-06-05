/// 53+54 string basic input output + string input a closer look of scanf, gets...


#include<bits/stdc++.h>
using namespace std;

int main(){

    char chh[100];

    scanf("%s",chh); /// string a & use hoi na /// space er ag porjonto
    puts(chh);
    printf("%s\n",chh);
//
//    scanf("%[^\n]",ch); /// with space
//    printf("%s\n",ch);
//
//    gets(ch); /// with space
//
//    printf("%s",ch);
    char chr[100];
  //  chr[100] = "Milon Sheikh";  /// avabe declare hoi na.......
    chr[5]='\0';
    printf("%s\n", chr);


    /// all gets use kora valo
    char ch[100];

    gets(ch);
    printf("%s\n", ch);
printf("ses1\n");

    char chra[10];
    gets(chra);
    //puts(chra);
    printf("%s\n", chra);
printf("ses2\n");
    gets(ch);
    puts(ch);
printf("ses3\n");

printf("54 practice : \n");



return 0;}
