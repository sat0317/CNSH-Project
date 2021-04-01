#include <stdio.h>
#define MAX 100


void insertionSort(int arr[], int n){
    int i, j, t;
    for(i=1;i<n;i++){
        j=i;
        while(j>0&&arr[j-1]>arr[j]){
            t=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=t;
            j--;
        }
    }
}


int main(){
    int n, a[MAX]={}, i;
    
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
