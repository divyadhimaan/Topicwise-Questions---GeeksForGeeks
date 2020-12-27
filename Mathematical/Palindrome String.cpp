class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    int flag=1;
	    int l=S.length();
	    
	    for(int i=0;i<l/2;i++)
	    {
	        if(S[i]!=S[l-i-1])
	        {
	           // cout<<"yes";
	            flag=0;
	            break;
	        }
	    }
	    return flag;
	}

};
