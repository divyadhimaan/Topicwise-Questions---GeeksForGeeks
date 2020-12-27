class Solution{
public:	
	bool balancedNumber(string N)
	{
	    int suml=0,sumr=0;
	    int l=N.length();
	   // cout<<l<<endl;
	    for(int i=0;i<l/2;i++)
	    {
	        suml += N[i];
	    }
	    for(int j=(l/2)+1;j<l;j++)
	    {
	        sumr += N[j];
	    }
	    if(suml==sumr)
	    return true;
	    
	    return false;
	}
};
