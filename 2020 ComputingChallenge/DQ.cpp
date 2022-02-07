int lower_bound(int k){
	for(int i=1;i<=n;i++) if(d[i]>=k) return i;
	return n+1;
}
