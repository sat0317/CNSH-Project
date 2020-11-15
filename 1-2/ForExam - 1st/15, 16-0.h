#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

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
