#include <stdio.h>

void quickSortFunc(int arr[], int start, int end){
    int i, j, t;
    int pivot=end-1;
    int left=start;
    int right=end-1;
    if(left>=right) return;
    while(left<=right){
        while(arr[left]<arr[pivot]) left++;
        while(arr[right]>=arr[pivot]) right--;
        if(left<=right){
            t=arr[left]; arr[left]=arr[right]; arr[right]=t;
            right--;
            left++;
        }
    }
    
    t=arr[left]; arr[left]=arr[pivot]; arr[pivot]=t;

    quickSortFunc(arr, start, pivot);
    quickSortFunc(arr, pivot, end);
}

int main(){
    int i, n, d[100]={};
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &d[i]);
    }
    
    quickSortFunc(d, 0, n);
    
    for(i=0;i<n;i++){
        printf("%d ", d[i]);
    }
    
    return 0;
}
