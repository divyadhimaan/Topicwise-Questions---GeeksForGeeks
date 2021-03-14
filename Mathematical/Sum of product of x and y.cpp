long long int sumofproduct(int n)
	{
	    int x,y,sum=0;
	    for(x=1;x<=n;x++)
	    {
	        y = floor(n/x);
	        sum+=x*y;
	    }
	    return sum;
	}  
