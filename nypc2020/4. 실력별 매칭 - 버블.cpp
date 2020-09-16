#include <stdio.h>
#include <algorithm>
#define abs(X) (X>0?X:-(X))

using namespace std;

	int cha[500001];
	int n;
	int imsi[500001];
	int newp, many;

void swap(int a ,int b){
    int temp;
    temp = cha[a];
    cha[a] = cha[b];
    cha[b] = temp;
    temp = imsi[a];
    imsi[a] = imsi[b];
    imsi[b] = temp;
}
void so(int *arr,int n){
    int count=0;
    while(count!=n){
	    for (int i =0; i< n-1; i++){
	        if(abs(arr[i])>abs(arr[i+1])){
			    int temp;
			    temp = cha[i];
			    cha[i] = cha[i+1];
			    cha[i+1] = temp;
			    temp = imsi[i];
			    imsi[i] = imsi[i+1];
			    imsi[i+1] = temp;
	        }
	        if(abs(arr[i])==abs(arr[i+1])&&arr[i]>arr[i+1]){
			    int temp;
			    temp = cha[i];
			    cha[i] = cha[i+1];
			    cha[i+1] = temp;
			    temp = imsi[i];
			    imsi[i] = imsi[i+1];
			    imsi[i+1] = temp;
	        }
	    }
	    count++;
    }
}

int main(){
	int t;

	scanf("%d %d %d", &n, &newp, &many);
	
	for(int i=1;i<=n;i++){
		scanf("%d", &cha[i]);
		cha[i]=cha[i]-newp;
	}
	
	so(cha, n);
	
	
	for(int c=1;c<=many;c++){
		printf("%d ", imsi[c]);
	}

	return 0;
}
