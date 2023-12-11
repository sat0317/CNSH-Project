#include <stdio.h>
#include <queue>
#include <algorithm>
#include <math.h>
#include <string.h>
using namespace std;

typedef long long int lli;
int check[10000001]={};
int s, e;
void gos(){
	queue<pair<int,int> > q;
	memset(check, 0, sizeof(check));
	scanf("%d %d", &s, &e);
	q.push(make_pair(0, s));
	if(s==e){
		printf("%d\n", 0);
		return;
	}
	check[s]=1;
	while(!q.empty()){
		int time=q.front().first;
		int now=q.front().second;
		q.pop();
		
		int temp;
		
		temp=now+1;
		if(temp<=10000000 && !check[temp]){
			check[temp]=1;
			if(temp==e){
				printf("%d\n", -time+1);
				return;
			}
			q.push(make_pair(time-1, temp));
		}
		temp=now-1;
		if(temp>0 && !check[temp]){
			check[temp]=1;
			if(temp==e){
				printf("%d\n", -time+1);
				return;
			}
			q.push(make_pair(time-1, temp));
		}
		temp=now*now;
		if(now<=1000 && !check[temp]){
			check[temp]=1;
			if(temp==e){
				printf("%d\n", -time+1);
				return;
			}
			q.push(make_pair(time-1, temp));
		}
		temp=sqrt(now);
		if(temp*temp==now && !check[temp]){
			check[temp]=1;
			if(temp==e){
				printf("%d\n", -time+1);
				return;
			}
			q.push(make_pair(time-1, temp));
		}
//		printf(": %d\n", now);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++) gos();
	return 0;
}
