#include <stdio.h>
#define MAX 20

void bubble_sort(int data[], int n)
{
	int i, j, temp;
	for(i=1;i<n;i++)  //�ܰ�
	    for(j=1;j<n;j++)   
	    {
	    	if(data[j-1] > data[j])// ���� ���� 0������ �ڷ�� 1������ �ڷḦ ���Ѵ�.
	    	{
	    		temp=data[j-1];
	    		data[j-1]=data[j];
	    		data[j]=temp;
			}
		}
}

int main()
{
	int i, n;
	int data[MAX];
	printf("Number of data => ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++)  //�迭�� ÷�ڹ�ȣ�� 0���� �����Ͽ� n-1������ �ڷḦ ���� 
	{
		printf("%d ��° ���� �Է� => ", i+1);
		scanf("%d", &data[i]);
	}
	
	bubble_sort(data, n);
	
	for(i=0;i<n;i++)
	    printf("%d  ", data[i]);
	printf("\n");
}

