int main() {
	//code
	int t,p,rem,m,rev,i,sum;
	scanf("%d",&t);
	int n[t];
	for(i=0;i<t;i++)
	scanf("%d",&n[i]);
	for(i=0;i<t;i++)
	{
	    m=n[i];
	    sum=0;
	    rev=0;
	    while(m>0)
	    {
	        rem=m%10;
	        sum+=rem;
	        m=m/10;
	    }
	    
	   p=sum;
	   while(p>0)
	   {
	       rem=p%10;
	       rev=rev*10+rem;
	       p=p/10;
	   }
	   if(sum==rev)
	   printf("YES\n");
	   else
	   printf("NO\n");
	}
	
	return 0;
}