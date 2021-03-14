queue<int> modifyQueue(queue<int> q, int k)
{
    queue<int> qu;
    stack<int> s;
    int n = q.size();
    
    for(int i=0;i<k;i++)
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
    }
    // cout<<q.front()<<endl;
    for(int i=0;i<n;i++)
    {
        if(i<k)
        {
            int temp = s.top();
            s.pop();
            qu.push(temp);
        }
        else
        {
            int x = q.front();
            q.pop();
            qu.push(x);
        }
    }
    return qu;
}
