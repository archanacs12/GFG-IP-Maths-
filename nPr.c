int main() {
	//code
	int t,i,j;
	long int res;
	scanf("%d",&t);
	int n[t],r[t];
	for(i=0;i<t;i++)
	scanf("%d%d",&n[i],&r[i]);
	for(i=0;i<t;i++)
	{
	    res=1;
	    for(j=0;j<=(r[i]-1);j++)
	    res*=(n[i]-j);
	    printf("%ld\n",res);
	}
	return 0;
}