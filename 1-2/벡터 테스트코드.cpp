#include <stdio.h>
#include <vector>
using namespace std;
void printv(vector<int> a, int b, int n){
	for(int i=b;i<n;i++){
		printf("%d\t", a[i]);
	}
	printf("\n");
}

int main(){
	vector<int> a;
	vector<int>::iterator p, k;   //int *p;  ��ſ� �ݺ��� itertor ���. �ڷ��� ���� ��ġ, ��ġ���� ���ϰ�, ������ �� ����. 124~125�� list ���� ����. 
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	printv(a, 0, 3);
	p=a.begin();     //p=&a[1];
	k=p; k+=3;    
	printf("���� �ݺ��� p�� �� ��� : %d\n", *p); 
	a.insert(p, 1, 4);  // a.insert(2, 4);   �н������� �ִ��� ������ ��뿹���� ž���� ����. ���� ���α׷����� ������ �ڷ��� ��ġ�� �ݺ��� ����(���⼭�� p)�� ���ؾ� ��. 
	printv(a, 0, 4);
	p+=2;
	a.insert(p, 4, 5);  // a.insert(3, 4, 5);
	printv(a, 0, 8);
	printf("%d", *k);
	return 0;
}

