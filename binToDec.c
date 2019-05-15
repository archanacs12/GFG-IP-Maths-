int main() {
	//code
	int t,i,res,j,m;
	scanf("%d",&t);
	long int b[t];
	for(i=0;i<t;i++)
	scanf("%ld",&b[i]);
	for(i=0;i<t;i++)
	{
	    res=0,j=0;
	    while(b[i]>0)
	    {
	       m=b[i]%10;
	       res=res+m*pow(2,j);
	       b[i]=b[i]/10;
	       j++;
	    }
	    printf("%d\n",res);

	}
	return 0;
}