#include <stdio.h>
	int n, k, t[10001], nj[1001]={}, wg[1001]={}, nn[1001]={};
	int bef=0, non=0;

void wgchecker(){
	for(int i=1;i<=k;i++){
		if(wg[i]) wg[0]++;
	}
}

int main(){
	scanf("%d %d", &k, &n);
	for(int i=0;i<n;i++){
		scanf("%d", &t[i]);
		nn[t[i]]++;
		if(bef==t[i]){
			wg[t[i]]=1;					//printf("A: %d", t[i]);
			non++;
		}/* else if(non==nj[t[i]]&&nn[t[i]]!=1){
			wg[t[i]]=1;					printf("B: %d", t[i]);
		} */else if(nn[t[i]]!=1){
			int imsi[1001]={};
			for(int j=i-1;j>=0;j--){
				imsi[t[j]]++;
				if(imsi[t[j]]>=2) break;
				if(t[j]==t[i]){
//										printf("C: %d", t[i]);
					wg[t[i]]=1;
					non++;
				}
			}
		}
		bef=t[i];
		nj[t[i]]=non;
	}
	
	wg[t[0]]=1;
	wgchecker();
	printf("%d\n", wg[0]);
	for(int i=1;i<=k;i++){
		if(wg[i]) printf("%d ", i);
	}
	
	return 0;
}
