int evaluatePostfix(string &str)
{
    stack<int> s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            s.push(str[i]-'0');
        }
        else
        {
            int n2 = s.top();
            s.pop();
            
            int n1 = s.top();
            s.pop();
            
            switch(str[i])
            {
                case '*': s.push(n1 * n2); break;
                case '/': s.push(n1 / n2); break;
                case '+': s.push(n1 + n2); break;
                case '-': s.push(n1 - n2); break;
            }
        }
        
    }
    return s.top();
}
