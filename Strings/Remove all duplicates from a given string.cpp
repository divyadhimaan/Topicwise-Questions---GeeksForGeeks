class Solution{
public:
	string removeDuplicates(string S) {
	   // transform(S.begin(), S.end(), S.begin(), ::tolower);
	    int H[256]={0};
	    string str="";
	    for(int i=0;i<S.length();i++)
	    {
	        if(H[S[i]]==0)
	        {
	           H[S[i]]++;
	           str+=S[i];
	        }
	        
	    }
	    return str;
	}
};
