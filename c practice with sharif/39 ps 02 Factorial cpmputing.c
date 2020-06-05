///39 Factorial Computing

#include<stdio.h>
int main() {

    int n, fact;
    //;
/**
while(scanf("%d",&n)) {
        fact = 1;
        for(int i=1; i<=n; i++) {

            if(n==0) {
                printf("%d\n",1);
                return 0;
            }

            else
                fact = fact*i;

        }
        printf("%d\n", fact);
    }
*/




    while(scanf("%d",&n) != EOF){
        fact = 1;
        while(n>1){
            fact = fact * n;

            n--;
        }
        printf("%d\n", fact);
    }
    //*/


    return 0;
}
