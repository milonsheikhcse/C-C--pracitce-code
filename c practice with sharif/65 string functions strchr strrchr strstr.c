/// 65 string function

/**

    strchr(str, ch); // ata soja dik theke
    strrchr(str, ch);// ata ulta dik theke
    strstr(str1, str2)


*/


#include<stdio.h>
#include<string.h>
int main() {

    char str[100] = "My name is Milon sheikh";
    printf("strin = My name is Milon sheikh\n\n");

    int address,address1,address3,  base;

    base = (int)str;

///strchr(str, ch); // ata soja dik theke

    address = (int)strchr(str, 'M');
    printf("base add. = %d   address: %d\n",base, address);

    if(address == 0) {
        printf("Not Found\n");
    } else {
        printf("Found location : %d\n", (address - base +1));
    }

///strrchr(str, ch);// ata ulta dik theke

    printf("\n\n strrchr : \n");

    address1 = (int)strchr(str, 'l');
    printf("base add. = %d address: %d\n",base, address1);

    if(address1 == 0) {
        printf("Not Found\n");
    } else {
        printf("Found location : %d\n", address1 - base+1);
    }

///strstr(str1, str2)

    printf("\n\nString er substring : \n");

    address3 = (int) strstr(str, "ka");

    printf("%s\n", address3);  /// full string thakle print kore

    printf("base add. = %d address: %d\n",base, address3);

    if(address3 ==0) {
        printf("not found\n");
    } else {
        printf("found location : %d\n", address3 - base + 1);
    }



    return 0;
}
