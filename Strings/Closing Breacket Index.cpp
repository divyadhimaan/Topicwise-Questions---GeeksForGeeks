class Solution
{
    public:
        int closing (string s, int pos)
        {
        	int l=s.length();
        	int count=1,index;
        	for(int i=pos+1;i<l;i++)
        	{
        	    if(s[i]=='[')
        	    {
        	         count++;
        	         index=i;
        	    }
        	   
        	    if(s[i]==']')
        	    {
        	        count--;
        	        index=i;
        	    }
        	    if(count==0)
        	    return index;
        	}
        }
};
