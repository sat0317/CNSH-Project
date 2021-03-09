#include <stdio.h>
	int n, he[15][15], wi[15][15], win[15], hen[15], sum[15], ans[15][15];
	

int hcheck(int a){
	int chi=0, run=0;
	for(int i=0;i<n;i++){
		if(ans[i][a]==1){
			run++;
			if(chi>=hen[a]||run>he[a][chi]) return 0;
		}
		else if(ans[i][a]==0) return 1;
		else if(ans[i][a]==-1&&run>0){
			if(run!=he[a][chi]) return 0;
			run=0;
			chi++;
		} 
	}
	
	if(run>0){
		if(run!=he[a][chi]){
			return 0;
		}
		chi++;
	}
	if(chi!=hen[a]) return 0;
	return 1;
}

int solving(int ri){
	for(int i=0;i<n;i++){
		if(hcheck(i)==0) return 0;
	}
	if(ri==n) return 1;
	
	if(win[ri]==1){ //행 전체 채우기/비우기 
		if(wi[ri][0]==0){
			for(int i=0;i<n;i++){
				ans[ri][i]=-1;
			}
			return solving(ri+1);
		}
		else if(wi[ri][0]==n){
			for(int i=0;i<n;i++){
				ans[ri][i]=1;
			}
			return solving(ri+1);
		}
	}
	
	if(sum[ri]+win[ri]==n+1){
		int pos=0;
		for(int i=0;i<win[ri];i++){
			for(int j=0;j<wi[ri][i];j++){
				ans[ri][pos+j]=1;
			}
			
			pos+=wi[ri][i];
			if(i+1==win[ri]) continue;
			
			ans[ri][pos]=-1;
			pos+=1;
		}
		return solving(ri+1);
	}
	
	int gap[15]={0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	int gapsum=0;
	do {
		int pos=gap[0];
		for(int i=0;i<gap[0];i++){
			ans[ri][i]=-1;
		}
		
		for(int i=0;i<win[ri];i++){
			for(int j=0;j<wi[ri][i];j++){
				ans[ri][pos+j]=1;
			}
			pos+=wi[ri][i];
			
			if(i+1==win[ri]) continue;
			
			for(int j=0;j<gap[i+1];j++){
				ans[ri][pos+j]=-1;
			}
			pos+=gap[i+1];
		}
		
		for(int i=pos;i<n;i++) ans[ri][i]=-1;
		
		if(solving(ri+1)==1) return 1;
		
		for(int i=0;i<n;i++){
			ans[ri][i]=0;
		}
		
		int gi=win[ri]-1;
		gap[gi]++;
		for(int i=0;i<win[ri];i++) gapsum=gap[i];
		
		while(sum[ri]+gapsum>n && gi>0){
			gap[gi-1]++;
			gap[gi]=1;
			gi--;
			for(int i=0;i<win[ri];i++) gapsum=gap[i];
		}
		for(int i=0;i<win[ri];i++) gapsum=gap[i];
		
	} while(sum[ri]+gapsum<=n);
	
	return 0;
}

int main(){
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &win[i]);
		for(int j=0;j<win[i];j++){
			scanf("%d", &wi[i][j]);
			sum[i]+=wi[i][j];
		}
	}
	for(int i=0;i<n;i++){
		scanf("%d", &hen[i]);
		for(int j=0;j<hen[i];j++){
			scanf("%d", &he[i][j]);
		}
	}
	
	solving(0);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ", ans[i][j]==1?1:0);
		}printf("\n");
	}
	
	return 0;
}
