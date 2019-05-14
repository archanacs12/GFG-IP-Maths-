
int main() {
	//code
	int t, m,rem,s,i;
	scanf("%d",&t);
	int n[t];
	for(i=0;i<t;i++)
	scanf("%d",&n[i]);
	for(i=0;i<t;i++)
	{
	    m=n[i];
	    s=0;
	    while(m>0)
	    {
	        rem=m%10;
	        s+=rem*rem*rem;
	        m=m/10;
	        
	    }
	    if(s==n[i])
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	
	
	return 0;
}