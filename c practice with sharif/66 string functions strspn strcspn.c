/// 66 string functions strspn(), strcspn()


#include<stdio.h>
#include<string.h>

int main(){

    char str1[100]= "My name is Milon";

    char str2[100]= "Myn";

    /// strspn()..................
    int len;
    len = strspn(str1,str2);

    printf("%d\n",len);

    printf("\nstrcspn\n");
    /// strcspn()
    char s3[100]= "my name is milon";
    char s4[100]= "aabbccdd";

    int len1 = strcspn(s3,s4);
    printf("%d\n", len1);




return 0;}
