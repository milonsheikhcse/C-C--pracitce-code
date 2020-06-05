///62 String Function:   strlen(), strcopy(), strcat(), strcmp().............
#include<stdio.h>
#include<string.h>


int main(){
    int len;
    char s[10],s1[10],s2[100];

    scanf("%s",s);

    len = strlen(s);  /// length.
    printf("%d\n",len);

    strcpy(s1,s);     /// copy
    printf("%s\n",s1);

    scanf("%s", s2);
    strcat(s1," ");   /// " " add
    strcat(s1,s2);   ///concatenation.
    printf("%s\n",s1);


///     string compare = strcmp...
    char s4[10],s5[10];
    scanf("%s%s",s4,s5);
    int ck;
    ck = strcmp(s4,s5); /// same hole 0 return kore..........

    if(ck==0){
        printf("Same\n");

    }
    else
        printf("Not same");

return 0;}
