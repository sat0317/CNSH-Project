#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

#define abs(A) ((A)>=0?(A):-(A))

int a[31], d[31][31][31], giho[31][31][31], ans[31], cnt, flag;


int solving(int s, int e, int tar){
	int x, y, z;
    if(tar<0||s>e||tar>30){
		return -1;
    }
	
	if(d[s][e][tar]!=0){
    	return d[s][e][tar];
	}
    
    if(s==e){
        if(a[s]==tar) return 0;
        else return -1;
    } else if(s+1==e){
        if(abs(a[s]-a[e])==tar){
			d[s][e][tar]=s;
			return s;
        } else {
        	return -1;
		}
    }
    
    for(int t=s;t<e;t++){
        for(int i=0;i<=30;i++){
            x=solving(s, t, i);
			y=-1;
			z=-1;
            
			if(i>=tar){
				y=solving(t+1, e, i-tar);
			}
            if(i+tar<=30){
				z=solving(t+1, e, i+tar);
        	}
        	
			if(x!=-1 && (y!=-1||z!=-1)){
                giho[s][e][tar]=(y!=-1)?i:-i;
                return d[s][e][tar]=t;
            }
        }
    }
    
    d[s][e][tar]=-1;
    return -1;
}

void whatanswer(int s, int e, int tar){
	int x, y;
	
    if(d[s][e][tar]<=0){
        if(s!=e) flag=1;
        return;
    }
    if(s==e) return;
    
    x=abs(giho[s][e][tar]);
    y=giho[s][e][tar]>0?x-tar:x+tar;
    
    whatanswer(d[s][e][tar]+1, e, y);
    whatanswer(s, d[s][e][tar], x);
    ans[++cnt]=s;
}

int main(){
	int n, target;
	
    scanf("%d %d", &n, &target);
    for(int i=1;i<=n;i++){
        scanf("%d", &a[i]);	
	}
    
    if(n==1){ //1°³  
        if(a[n]!=target) printf("0");
        goto ending;
    }
    if(n==2){
    	if(abs(a[1]-a[2])!=target) printf("0");
    	goto ending;
	}
    
    solving(1, n, target);
    whatanswer(1, n, target);
    
    if(flag||cnt!=n-1){
        printf("0");
    } else {
        for(int i=1;i<=n-1;i++){
            printf("%d\n", ans[i]);
        }
	}
	
	ending:
	return 0;
} 

