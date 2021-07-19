#include <stdio.h>

int main(){
	int n, m;
	int train[100001]={};
	int imsi[21]={}, imsj=1;
	scanf("%d %d", &n, &m);
	for(int i=1;i<=20;i++){
		imsi[i]=imsj;
		imsj*=2;
	}
	for(int i=1;i<=m;i++){
		int cmd, t, x;
		scanf("%d %d", &cmd, &t);
		switch(cmd){
			case 1:
				scanf("%d", &x);
				t[i]=t[i]|imsi[x];
				break;
			case 2:
				t[i]=t[i]-(t[i]&imsi[x]);
				break;
			case 3:
				t[i]=t[i]<<1;
				t[i]=t[i]-(t[i]&imsi[20]);
				break;
			case 4:
				t[i]=t[i]>>1
				break;
		}
	}
	
	return 0;
}
