///54 string input a closer look of scanf, gets...

#include<stdio.h>

int main() {

    char str1[100],str[100];
 /**

  // gets(str1);
    scanf("[a-z]",str1);
    printf("%s",str1);

printf("\n");

   // scanf("%[^\a]", str1); /// a bade sob input nibe.
   // scanf("%["^\n]",str1); /// \n bade sob input nibe.

//    char
    gets(str);
    //scanf("%[a]",str);
    printf("%s", str);
*/
    //gets(str);
    scanf("%s%*c",str);
    printf("%s\n",str);
    gets(str);
    printf("%s\n",str);
    gets(str);
    printf("%s\n",str);





    return 0;
}
