queue<int> rev(queue<int> q)
{
    queue<int> qu;
    stack<int> s;
    int n = q.size();
    for(int i=0;i<n;i++)
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
    }
    for(int i=0;i<n;i++)
    {
        int temp = s.top();
        s.pop();
        qu.push(temp);
        
    }
    return qu;
}
