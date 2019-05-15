int main() {
	//code
	int t,i,rem,m,rev;
	scanf("%d",&t);
	int n[t];
	for(i=0;i<t;i++)
	scanf("%d",&n[i]);
	for(i=0;i<t;i++)
	{
	    m=n[i];
	    rev=0;
	    while(m>0)
	    {
	        rem=m%10;
	        rev=rev*10+rem;
	        m=m/10;
	    }
	    printf("%d\n",rev);
	}
	return 0;
}