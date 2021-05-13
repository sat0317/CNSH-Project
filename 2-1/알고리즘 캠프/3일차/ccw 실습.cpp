#include <stdio.h>
#include <utility>
#include <algorithm>

using namespace std;

int ccw(pair<int, int> a, pair<int, int> b, pair<int, int> c){
	int op=a.first*b.second+b.first*c.second+c.first*a.second;
	op-=(a.second*b.first+b.second*c.first+c.second*a.first);
	
	if(op>0) return 1;
	else if(op==0) return 0;
	else return -1;
}

int check(pair<int, int> a, pair<int, int> b, pair<int, int> c, pair<int, int> d){
	int ab=ccw(c, d, a)*ccw(c, d, b);
	int cd=ccw(a, b, c)*ccw(a, b, d);
	if(ab==0&&cd==0){
		if(a>b) swap(a, b);
		if(c>d) swap(c, d);
		return c<=b&&a<=d;
	}
	return ab<=0&&cd<=0;
} 

int main(){
	pair<int, int> a, b, c, d;
	scanf("%d %d %d %d %d %d %d %d", &a.first, &a.second, &b.first, &b.second, &c.first, &c.second, &d.first, &d.second);
	return 0;
}
