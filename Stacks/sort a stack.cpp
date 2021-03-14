void insert(stack<int>&s,int t)
{
    if(s.size()==0 || t>=s.top())
    {
        s.push(t);
        return;
    }
    int val=s.top();
    s.pop();
    insert(s,t);
    s.push(val);
    return;
}

void SortedStack :: sort()
{
    if(s.size()==1)
    return;

    int temp=s.top();
    s.pop();
    sort();
    insert(s,temp);
    return;
}
