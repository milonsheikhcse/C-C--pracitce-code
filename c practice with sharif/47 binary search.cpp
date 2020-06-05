/// 47 Binary search
///  12 23 30 32 38 42 50 60 65 70 85 90 100
/// a[0]                                 a[12]

/// mid = (int) (start + end)/2
#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    scanf("%d", &n);
    int num[n];

    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }

    int key;
    scanf("%d", &key);
    int start, end, mid;

    for(int j=start; j<=end; j++){
        mid = (int)(start + end)/2;
        if(num[mid]==key){
            printf("%d\n", num[mid]);
            break;
        }
        else if(num[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    return 0;
}
