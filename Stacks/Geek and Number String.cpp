int minLength(string s, int n) {
        stack <char> s1,s2;
        
        for(int i=0;i<n;i++)
        {
            if(i==n-1)
                s2.push(s[i]);
            else 
                s1.push(s[i]);
        }
        
        while(!s1.empty())
        {
            if(s2.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            else
            {
                int x = s1.top()-'0', y = s2.top()-'0';
                if((abs(x-y)==1 && max(x,y)%2==0) || abs(x-y)==9)
                {
                    s1.pop();
                    s2.pop();
                }
                else
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
        }
        return s2.size();
    }
