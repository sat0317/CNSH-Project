#include <stdio.h>
#include <queue>
using namespace std;
int main(){
	int a, b;
	queue<int> q;
	
	scanf("%d %d", &a, &b);
	q.push(a);
	q.push(b);
	printf("%d", q.size());
	
	return 0;
} 
