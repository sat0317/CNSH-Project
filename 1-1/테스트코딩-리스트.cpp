#include <stdio.h>
#include <list>

using namespace std;

list<int> l;

void show(){
	list<int>::iterator q;
	for(q=l.begin();q!=l.end();q++){
		printf("%d ", *q);
	}
	printf("\n");
}

int main(void){
	list<int>::iterator q;
	
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	
	q=l.begin();
	q++;
	printf("%d %x\n", *q, q);
	show();
	l.insert(q, 4);
	show();
	printf("%d %x\n", *q, q);
	l.erase(q);
	show();
	printf("%d %x\n", *q, q);
	
	return 0;
}
