/// 73 pointer with array ............

#include<stdio.h>
#include<string.h>
int main(){
    int arr[100] = {2, 3, 4, 1, 7, 0, 9};
    int *p;
    /// p = arr = &arr[0] same
    p = &arr[2];

    printf("%d %d\n",*p, *(p+1));


    printf("string copy : \n");

    char str[100] = "BSMRSTU";
    char str1[100] = "Gopalganj";

    strcpy(str,str1+3);

    printf("%s\n",str);

    char *pc; /// pc address../// *pc value....

    pc = strcpy(str,str1+3); /// strcpy-> char address return kore.

    printf("%s\n",pc);
    printf("%d %d\n", pc, &str); /// p and str are same address.

return 0;
}
