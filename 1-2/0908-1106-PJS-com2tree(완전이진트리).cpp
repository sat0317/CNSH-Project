#include <stdio.h>

int main(){
    int n, t[1<<10]; //1<<10 �� 1*2^10�� �ǹ�;  height�� 10�� 
    scanf("%d", &n);//���� 
    for(int i=1;i<=n;i++){ //tree�� ���� �����ε� ����� �� ����(����) 
        scanf("%d", &t[i]);
    }
    
    for(int k=1;k<=n;k*=2){//���� depth�� ��������� �ۼ� 
        for(int i=k;i<=n&&i<=2*k-1;i++){//siblings ��ġ ����Ŵ 
            printf("%d ", t[i]);
        }
        printf("\n"); 
    }
    
    return 0;
} 
