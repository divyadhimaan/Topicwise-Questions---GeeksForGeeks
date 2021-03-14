bool pairWiseConsecutive(stack<int> s)
{
    int x;
    if(s.size()==1)
    {
        return true;
    }
    while(s.size()!=1)
    {
        x = s.top();
        s.pop();
        if(x-1 == s.top() || x+1 == s.top() )
            return true;
        else
            return false;
    }
}
