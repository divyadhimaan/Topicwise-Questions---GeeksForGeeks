string reverseWords (string s)
    {
        string rev = "";
        stack<char> stk;
        int n=s.length();
        
        for(int i=0;i<n;i++)
        {
            if(s[i] != '.')
            {
                stk.push(s[i]);
            }
            else
            {
                while(stk.empty()==false)
                {
                    rev = rev + stk.top();
                    stk.pop();
                }
                rev = rev + '.';
            }
        }
        
        //for the last word
        while(stk.empty() == false )
        {
            rev = rev + stk.top();
            stk.pop();
        }
        
        return rev;
    }
