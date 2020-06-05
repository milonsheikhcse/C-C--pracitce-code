/// 57 print n strings as input and print then in reverse order.cpp

#include<bits/stdc++.h>
using namespace std;

int in(int n) {
    return scanf("%d",&n);
}
int main() {

    int n;
    scanf("%d",&n);
    /// in(n); ///        problem.

    char str[10][100];

    for(int i=0; i<n; i++) {
        //gets(str[i]);
        cin >> str[i];
        //scanf("%s",str[i]);
    }

    for(int j=n-1; j>=0; j--) {
        for(int i=n-1; i>=0; i--) {
            printf("%s\n",str[i]);
        }
        printf("\n");
    }



    return 0;
}

