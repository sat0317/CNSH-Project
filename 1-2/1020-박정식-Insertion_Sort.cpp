#include <stdio.h>

void insertionSort(int arr[], int n){
    int i, j, t;
    for(i=1;i<n;i++){
        for(j=i;j>0&&arr[j-1]>arr[j];j--){
            t=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=t;
        }
    }
}


int main(){
    int n, a[100]={}, i;
    
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    insertionSort(a, n);
    
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    
    
    return 0;
}
