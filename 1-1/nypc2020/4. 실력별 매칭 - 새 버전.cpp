#include <stdio.h>
#include <algorithm>
#define abs(X) (X>0?X:-(X))

using namespace std;

	int cha[500001];
	int n;
	int imsi[500001];
	int newp, many;



int main(){
	int t;

	scanf("%d %d %d", &n, &newp, &many);
	
	for(int i=1;i<=n;i++){
		scanf("%d", &cha[i]);
		cha[i]=cha[i]-newp;
	}
	
	for(int i=2;i<=n;i++){
		for(int j=1;j<i;j++){
			if(abs(cha[j])>abs(cha[i])){
				t=cha[i];
				for(int k=i-1;k>=j;k--)
					cha[k+1]=cha[k];
				cha[j]=t;
				
				t=imsi[i];
				for(int k=i-1;k>=j;k--)
					imsi[k+1]=imsi[k];
				imsi[j]=t;
			}
			if(cha[j]==-cha[i]){
				t=cha[i];
				for(int k=i-1;k>=j;k--)
					cha[k+1]=cha[k];
				cha[j]=t;
				
				t=imsi[i];
				for(int k=i-1;k>=j;k--)
					imsi[k+1]=imsi[k];
				imsi[j]=t;
			}
		}
	}

	
	
	
	for(int c=1;c<=many;c++){
		printf("%d ", imsi[c]);
	}

	return 0;
}
