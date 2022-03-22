#include <stdio.h>
#define abs(X) (X>0?X:-(X))
	int cha[500000];
	int n;
	int newp, many, imsi=100000001, thisn=0;
	char printed[500000]={0, };
	int end[500000];



int main(){
	
	scanf("%d %d %d", &n, &newp, &many);
	
	for(int i=0;i<n;i++){
		scanf("%d", &cha[i]);
		cha[i]=cha[i]-newp;
	}
	
	for(int c=0;c<many;c++){
		int finder=100000001;
		int imsin=0;

		for(int i=0;i<n;i++){
			if(printed[i]) continue;
			if(abs(finder)>abs(cha[i])){
				imsin=i;
				finder=cha[i];
			} else if(abs(finder)==abs(cha[i])){
				if(finder>cha[i]){
					imsin=i;
					finder=cha[i];
				}
			}
		}
		imsi=finder;
		thisn=imsin;
		
		printf("%d ", thisn+1);
		printed[thisn]=1;
	}

//	for(int i=0;i<n;i++){
//		int mint=0;
//		int minv=2147483647;
//		for(j=0;j<n;j++){
//			if(printed[i]) continue;
//			 
//		}
//	}
	
	return 0;
}
