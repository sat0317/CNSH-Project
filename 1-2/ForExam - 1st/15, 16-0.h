#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

void bubble_sort(int arr[], int n){
	int i, j, t;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i;j++){
			if(arr[j-1]>arr[j]){
				t=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=t;
			}
		}
	}
}

void selection_sort(int arr[], int n){
	int i, j, min, t;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(arr[j]>arr[min]) min=j;
		}
		t=arr[min];
		arr[min]=arr[i];
		arr[i]=t;
	}
}


#endif
