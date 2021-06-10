#include <stdio.h>
#define MAX 20

void bubble_sort(int data[], int n)
{
	int i, j, temp;
	for(i=1;i<n;i++)  //단계
	    for(j=1;j<n;j++)   
	    {
	    	if(data[j-1] > data[j])// 가장 먼저 0번방의 자료와 1번방의 자료를 비교한다.
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
	
	for(i=0;i<n;i++)  //배열의 첨자번호는 0부터 시작하여 n-1번까지 자료를 넣음 
	{
		printf("%d 번째 숫자 입력 => ", i+1);
		scanf("%d", &data[i]);
	}
	
	bubble_sort(data, n);
	
	for(i=0;i<n;i++)
	    printf("%d  ", data[i]);
	printf("\n");
}

