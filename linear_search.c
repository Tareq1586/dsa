#include <stdio.h>

int linear_search(int A[], int n, int x){
    int i;
    for( i = 0; i < n; i++){
        if(A[i] == x){
            return i;
        }
    }
    i = -1;
    return i;
}

int main(void){
    int arr[] = {10,20,15,30};
    int size = sizeof(arr);
    int key = 15;
    printf("%d", linear_search(arr, size, key));
    return 0;
}