//Copyright (c) 2020. ParkJeongSik. 
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:
//
//The above copyright notice and this permission notice shall be included in
//all copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//THE SOFTWARE.


#include <stdio.h>
#define MAXSIZE 10

int main(){
    int G[MAXSIZE][MAXSIZE]={0, };
    int v, e, a, b, w;
    
    scanf("%d %d", &v, &e);
    for(int i=0;i<e;i++){
        scanf("%d %d %d", &a, &b, &w);
        G[a-1][b-1]=w;
    }
    
    printf("go:");
    for(int i=1;i<=v;i++) printf("\t%d", i);
    for(int i=0;i<v;i++){
        printf("\n");
        printf("%d\t", i+1);
        for(int j=0;j<v;j++){
            printf("%d\t", G[i][j]);
        }
    }
    
    return 0;
}
