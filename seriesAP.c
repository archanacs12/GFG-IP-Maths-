
int main() {
	//code
	
	int i,j,t,tn=0,d=0;
	scanf("%d",&t);
	int a[t],b[t],n[t];
	for(i=0;i<t;i++){
	scanf("%d%d",&a[i],&b[i]);
	scanf("%d",&n[i]);
	}
	for(i=0;i<t;i++)
	{
	    d=b[i]-a[i];
	    tn=a[i]+(n[i]-1)*d;
	    printf("%d\n",tn);
	}
	
	return 0;
}