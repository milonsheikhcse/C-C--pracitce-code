/// take n integer as input and print their sum
/**
    input :5
          5 6 9 2 7
    output: 29
*/

#include<stdio.h>

int main(){

    int n, sum = 0;
    scanf("%d",&n);

    while(n--){
        int x;
        scanf("%d",&x);
        sum = sum + x;

    }
    printf("%d\n",sum);


return 0;
}
