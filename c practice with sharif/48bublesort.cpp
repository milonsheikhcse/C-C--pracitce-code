
///48 Bubble sorting .............

#include<bits/stdc++.h>

using namespace std;

int ar[100000000];
int main() {

    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++) {
        cin >> ar[i];
    }

    printf("given array : \n");
    for(int i=1; i<=n; i++) {
        cout << ar[i];
    }
    printf("\n");

    /// sorting....1st /// this`s selection sort
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<n; j++){

            if(ar[i]>ar[j]) {
                swap(ar[i], ar[j]);
            }
            for(int k=1; k<=n; k++) { ///for to see how to work.
                cout << ar[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    printf("\n");
    for(int j=1; j<=n; j++){
        printf("%d ", ar[j]);
    }

   /* /// print.........
   5
   5 4 3 2 1

    20
    2 3 8 7 1 2 2 2 7 3 9 8 2 1 4 2 4 6 9 2
*/
    return 0;
}
