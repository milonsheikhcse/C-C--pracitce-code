///  sorted binary search.with array...
#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	scanf("%d", &n);

	int num[n];

	for(int i=0;i<n; i++){
		scanf("%d", &num[i]);
	}

	printf("\nEnter Your num = ");
	int key;
	scanf("%d", &key);

	int mid, start=0, end=n-1;
	do{
		mid = (end+start)/2;
		//printf("%f\n",mid);
		if(num[mid] == key){
			printf("index at = %d & value = %d \n", mid+1, num[mid]);
			break;
		}
		else if(key > num[mid]){
			start = mid +1;

		}
		else if (key < num[mid] ){
			end = mid -1;
		}
	}
	while(start <= end);

	if(start>end)  printf("Failed.\n");

	main();
	return 0;
	/// 12
    /// 1 2 3 4 5 6 7 8 9 10 11 12
    ///search value:
    /// index :
}

