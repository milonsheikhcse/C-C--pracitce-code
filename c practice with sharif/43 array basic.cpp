
///   sharif c 43

#include<bits/stdc++.h>
using namespace std;

int main() {

    int num[4], sum =0;

    for(int i=0; i<4; i++) {
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }
    printf("%d\n", sum);


    return 0;
}
