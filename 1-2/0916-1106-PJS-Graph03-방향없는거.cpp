#include <stdio.h>
#include <vector>

using namespace std;


int main(){
    int v1, v2;
    int v, e;
    vector<int> g[10];
    
    scanf("%d %d", &v, &e);
    
    for(int i=1;i<=e;i++){
        scanf("%d %d", &v1, &v2);
        g[v1].push_back(v2);
        g[v2].push_back(v1);//중복 확인코드 필요!! 
    }
    
    for(int i=1;i<=v;i++){
        printf("%d: ", i);
        for(int j=0;j<g[i].size();j++){
            printf("%d\t", g[i][j]);
        }
        printf("\n");
    }
    
    return 0;
} 
