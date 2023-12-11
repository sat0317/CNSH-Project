#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
#include <queue>
#define abs(a) ((a)>0?(a):-(a))
using namespace std;
typedef pair<int,int> pii;
typedef long long int lli;

vector<pair<pii, vector<char> > > v;
int n, m;
char map[100000][100000]; 

void sort(){
	int tsize=v.size();
	for(int i=0;i<tsize;i++){
		for(int j=i+1;j<tsize;j++){
			if(v[i].first.first>v[j].first.first){
				swap(v[i], v[j]);
			}
		}
	}
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++) scanf("%s", &map[i][1]);
	
	for(int i=n;i>0;i--){
//		printf("error");
//		sort();
		for(int vi=0;vi<v.size();vi++){
			int posx=v[vi].first.first, deltapos=v[vi].first.second-i;
			int mxp=posx+deltapos<m?posx+deltapos:m;
			for(int j=posx-deltapos>0?posx-deltapos:1; j<=mxp; j++){
				if(map[i][j]=='X'){
					map[i][j]='O';
					for(int k=0;k<deltapos-abs(posx-j);k++){
						v[vi].second.push_back('D');
					}
					if(posx-j>0){
						for(int k=0;k<posx-j;k++) v[vi].second.push_back('R');
					}
					else{
						for(int k=0;k<j-posx;k++) v[vi].second.push_back('L');
					}
					
					v[vi].first.first=j;
					v[vi].first.second=i;
					break;
				}
			}
		}
		for(int j=1;j<=m;j++){
			if(map[i][j]=='X'){
				map[i][j]='O';
				vector<char> tempv;
				for(int k=0;k<n-i;k++){
					tempv.push_back('D');
				}
				v.push_back(make_pair(make_pair(j, i), tempv));
			}
		}	
	}
	
	for(int i=0;i<v.size();i++){
		while(v[i].second.size()<n-1) v[i].second.push_back('D');
	}
	
	printf("%d\n", v.size());
	for(int i=0;i<v.size();i++){
		printf("%d ", v[i].first.first);
		for(int j=n-2;j>=0;j--) printf("%c", v[i].second[j]);
		printf("\n");
	}
	
	return 0;
}
