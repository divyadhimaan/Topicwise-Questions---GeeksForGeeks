class Solution{
public:	
	
	
	void printDuplicate(string S)
	{
	    int h[26]={};
	    for(int i=0;i<S.length();i++)
	    {
	    	h[S[i]]++;
		}
		for(int i=0;i<26;i++)
		{
			char c=i;
			if(h[i]>0)
			cout<<h[i]<<" "<<c<<" ";
		}
	}

};
