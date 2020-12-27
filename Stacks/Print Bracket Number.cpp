class Solution{
public:	

	vector<int> barcketNumbers(string S)
	{
	    vector<int> v;
	    stack<int> s;
	    int count=1;
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]=='(')
	        {
	           // if(s.top()==-1)
	           // count++;
	            
	            s.push(count);
	            v.push_back(count);
	            count++;
	        }
	        else if(S[i]==')')
	        {
	            v.push_back(s.top());
	            s.pop();
	        }
	    }
	    return v;
	}
};
