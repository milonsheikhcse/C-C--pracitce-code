/// 76 function parameter list

#include<stdio.h>


int power(int n, int pow){ /// ata parameter...

    int mul = 1, i;
    for(i =1; i<=pow; i++){
        mul *= n;
    }

    return mul;
}

int main(){

    int ans;

    ans = power(2,3); /// ata arguments
    printf("%d\n",ans);


return 0;

}
