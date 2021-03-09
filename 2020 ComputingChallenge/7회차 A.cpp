#include <stdio.h>
	int t[26], n, k, imsi[3], ima[26], nowans[101], allans[10000][101], anscnt;

void reset(){
	for(int i=0;i<26;i++){
		ima[i]=t[i];
	}
}

void f(int now, int np){
	if(k==now){
		for(int i=0;i<k;i++){
			allans[anscnt][i]=nowans[i];
		}
		anscnt++;
		return;
	}
	for(int i=np;i<26;i++){
		if(ima[i]>0){
			ima[i]--;
			nowans[now]=i+'a';
			f(now+1, i);
			ima[i]++;
		}
	}
}

int main(){
	
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++){
		scanf("%s", imsi);
		t[imsi[0]-'a']++;
	}
	
	reset();
	f(0, 0);
	printf("%d\n", anscnt);
	for(int i=0;i<anscnt;i++){
		for(int j=0;j<k;j++){
			printf("%c ", allans[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
