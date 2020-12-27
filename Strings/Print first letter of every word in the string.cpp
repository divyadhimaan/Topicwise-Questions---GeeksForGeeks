class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    string str="";
	    int count=0;
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]==' ')
	        count=0;
	        if(count==0 && S[i]!=' ')
	        {
	           str+=S[i];
	           count++;
	        }
	        
	    }
	    return str;
	}
};
