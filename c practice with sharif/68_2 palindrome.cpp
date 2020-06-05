#include<bits/stdc++.h>
using namespace std;

int mark[100];


int main() {

    //int n;
    //scanf("%d",&n);
    //    char ch[100];
    //
    //    for(int i=0;i<=n;i++){
    //        scanf("%c",&ch[i]);
    //    }
    //    for(int i=0;i<n;i++){
    //        printf("%c",ch[i]);
    //    }

    string ch;
    //scanf("%s",&ch);
    cin >> ch;
        /// palindrome check == yes
    bool b=0;
    for(int i=0,j=ch.size()-1; i<j; i++,j--) {
        if(ch[i]!=ch[j]) {
            b=1;
            break;
        }

    }
    if(b==1)
        printf("No\n");
    else
        printf("Yes\n");


    return 0;
}

