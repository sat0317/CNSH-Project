int mid(int a, int b, int c){
	int d[3]={a, b, c};
	
	for(int i=0;i<2;i++){
		int maxi=i;
		for(int j=i+1;j<3;j++){
			if(d[j]<d[maxi]) maxi=j;
		}
		int t=d[maxi];
		d[maxi]=d[i];
		d[i]=t;
	}
	
	return d[1];
}
