#include <stdio.h>
#include <stdlib.h>
#define less (a+b+c)

    int a, b, c;

void rem(int i, int j){
    if(i==1){
        a=j-1<a?j-1:a;
    } else if(i==2){
        a=j-1<a?j-1:a;
        b=j-1<b?j-1:b;
    } else {
        a=j-1<a?j-1:a;
        b=j-1<b?j-1:b;
        c=j-1<c?j-1:c;
    }
    //printf("%d %d %d\n", a, b, c);
}

int ifiremove(int i, int j){
    int na, nb, nc;
    na=a;
    nb=b;
    nc=c;
    if(i==1){
        na=j-1<na?j-1:na;
        if(na<0) return 0;
    } else if(i==2){
        na=j-1<na?j-1:na;
        nb=j-1<nb?j-1:nb;
        if(nb<0) return 0;
    } else {
        na=j-1<na?j-1:na;
        nb=j-1<nb?j-1:nb;
        nc=j-1<nc?j-1:nc;
        if(nc<1) return 0;
    }
    if(na+nb+nc==1) return 1;
    if((nb==0&&nc>1)||(nc==1)){
        return 0;
    }
    return ((na+nb+nc)%2);
}

int main(){
    int sci=0, scj=0;
    signed int k=3;
    scanf("%d %d %d", &a, &b, &c);
    k=c-2;
    while(less!=0){
        int i, j;
        do{
            i=(k++)%3+1;
            if(i==1) j=(k++)%a+1;
            else if(i==2) j=(k++)%b+1;
            else j=(k++)%(c-1)+2;
        } while(!ifiremove(i, j));
        printf("%d %d\n", i, j);
        fflush(stdout);
        rem(i, j);
        scanf("%d %d", &sci, &scj);
        rem(sci, scj);
    }


    return 0;
}

