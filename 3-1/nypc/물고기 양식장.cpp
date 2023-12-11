#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
#include <queue>
using namespace std;
typedef pair<int,int> pii;
typedef long long int lli;


lli ans[100100]={};
int map[5010][5010]={};

int main(){
	int n, m, kk, q, xsize, ysize;
	int mulx[100100][2]={};
	int muly[100100][2]={};
	vector<int> truemode;
	
	scanf("%d %d %d %d", &n, &m, &kk, &q);
	memset(map, -1, sizeof(map));
	int mode, num, ia, ib, ic, id;
	int j, k, ix;
	if(q<=1000){
		for(int i=0;i<q;i++){
			scanf("%d %d %d %d %d %d", &mode, &num, &ia, &ib, &ic, &id);
			if(mode==2){
				for(vector<int>::iterator it=truemode.begin(); it!=truemode.end(); it++){
					if(*it == num){
						truemode.erase(it);
						break;
					}
				}
			}
			else{
				truemode.push_back(num);
				mulx[num][0]=ia;
				muly[num][0]=ib;
				mulx[num][1]=ic;
				muly[num][1]=id;
			}
			
			ix=truemode.size();
			for(int jn=0;jn<ix;jn++){
				for(int kn=jn+1;kn<ix;kn++){
					j=truemode[jn]; k=truemode[kn];
					xsize=0; ysize=0;
					if(mulx[j][0]<=mulx[k][0] && mulx[k][0]<=mulx[j][1]){
						if(mulx[j][0]<=mulx[k][1] && mulx[k][1]<=mulx[j][1])
							xsize=mulx[k][1]-mulx[k][0]+1;
						else xsize=mulx[j][1]-mulx[k][0]+1;
					}
					else if(mulx[j][0]<=mulx[k][1] && mulx[k][1]<=mulx[j][1]){
						xsize=mulx[k][1]-mulx[j][0]+1;
					}
					else if(mulx[k][0]<=mulx[j][0] && mulx[j][1]<=mulx[k][1]){
						xsize=mulx[j][1]-mulx[j][0]+1;
					}
					else continue;
					
					if(muly[j][0]<=muly[k][0] && muly[k][0]<=muly[j][1]){
						if(muly[j][0]<=muly[k][1] && muly[k][1]<=muly[j][1])
							ysize=muly[k][1]-muly[k][0]+1;
						else ysize=muly[j][1]-muly[k][0]+1;
					}
					else if(muly[j][0]<=muly[k][1] && muly[k][1]<=muly[j][1]){
						ysize=muly[k][1]-muly[j][0]+1;
					}
					else if(muly[k][0]<=muly[j][0] && muly[j][1]<=muly[k][1]){
						ysize=muly[j][1]-muly[j][0]+1;
					}
					else continue;
	//				printf("%d %d\n", xsize, ysize);
					ans[j]+=xsize*ysize;
					ans[k]+=xsize*ysize;
				}
			}
		}
	}
	
	else{
		for(int i=0;i<q;i++){
			scanf("%d %d %d %d %d %d", &mode, &num, &ia, &ib, &ic, &id);
			if(mode==2){
				for(vector<int>::iterator it=truemode.begin(); it!=truemode.end(); it++){
					if(*it == num){
						truemode.erase(it);
						for(int x=ia; x<=ic; x++){
							for(int y=ib; y<=id; y++){
								map[x][y]--;
							}
						}
						break;
					}
				}
			}
			else{
				truemode.push_back(num);
				mulx[num][0]=ia;
				muly[num][0]=ib;
				mulx[num][1]=ic;
				muly[num][1]=id;
				for(int x=ia; x<=ic; x++){
					for(int y=ib; y<=id; y++){
						map[x][y]++;
					}
				}
			}
			
			ix=truemode.size();
			for(int jn=0;jn<ix;jn++){
				j=truemode[jn];
				ia=mulx[num][0];
				ib=muly[num][0];
				ic=mulx[num][1];
				id=muly[num][1];
				
				for(int x=ia; x<=ic; x++){
					for(int y=ib; y<=id; y++){
						if(map[x][y]>0) ans[j]+=map[x][y];
					}
				}
			}
		}
	}
	
	for(int i=1;i<=kk;i++){
		printf("%lld\n", ans[i]);
	}
	
	return 0;
}
