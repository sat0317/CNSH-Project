#include <stdio.h>
#include <list>
#include <stack>
#include <queue>

using namespace std;

void show(list<int> l){
	list<int>::iterator q;
	for(q=l.begin();q!=l.end();q++){
		printf("%d ", *q);
	}
	printf("\n");
}

void show(stack<int> s){
	while(!s.empty()){
		printf("%d ", s.top());
		s.pop();
	}
	printf("\n");
}

void show(queue<int> q){
	while(!q.empty()){
		printf("%d ", q.front());
		q.pop();
	}
	printf("\n");
}

int main(){
	list<int> l;
	stack<int> s;
	queue<int> q;
	
	list<int>::iterator a;
	
	l.push_front(1);
	l.push_back(2);
	l.push_back(3);
	a=l.begin();
	show(l);
	a++;
	l.insert(a, 4);
	show(l);
	l.pop_back();
	show(l);
	l.erase(a);
	show(l);
	
	show(s);
	s.push(1);
	s.push(2);
	show(s);
	s.pop();
	s.push(3);
	show(s);
	
	show(q);
	q.push(1);
	q.push(2);
	q.push(3);
	show(q);
	q.pop();
	show(q);
	q.push(4);
	show(q);
	
	return 0;
}
