class Solution{
public:	
		
	string removeDups(string S) 
	{
	    transform(S.begin(), S.end(), S.begin(), ::tolower);
	    int H[26]={0};
	    string str="";
	    for(int i=0;i<S.length();i++)
	    {
	        if(H[S[i]-'a']==0)
	        {
	           H[S[i]-'a']++;
	           str+=S[i];
	        }
	        
	    }
	    return str;
	}
};
