///  82 function array as parameter.

#include<stdio.h>

void change(int arr[]){
    printf("in function before change arr[3] %d\n",arr[2]);
    arr[2]=4;
    printf("in function after change arr[3] %d\n",arr[2]);

}
void chang2d(int arr[][10]){ ///2nd tar size ofcourse dite hobe..
    printf("before change arr2d[4][2] %d\n",arr[4][2]);
    arr[4][2] = 6;
    printf("after change arr2d[4][2] %d\n",arr[4][2]);
}

int main(){

    int array[] = {1,2,3,4,5};
    printf("before change arr[3] %d\n",array[2]);
    change(array);
    printf("after change arr[3] %d\n",array[2]);
/// 2d array
    int arr2d[5][10];
    arr2d[4][2] = 5;
    printf("before change arr2d[4][2] %d\n",arr2d[4][2]);
    chang2d(arr2d);
    printf("after change arr2d[4][2] %d\n",arr2d[4][2]);


return 0;
}
