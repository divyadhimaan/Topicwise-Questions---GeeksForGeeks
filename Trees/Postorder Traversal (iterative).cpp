vector<int> postOrder(Node* node)
{
    vector<int> v;
    
    if(node==NULL)
        return v;
    
    stack<Node*> s1,s2;
    s1.push(node);
    Node *p;
    
    while(!s1.empty())
    {
        p = s1.top();
        s1.pop();
        s2.push(p);
        
        if(p->left)
            s1.push(p->left);
        if(p->right)
            s1.push(p->right);
    }
    
    while(!s2.empty())
    {
        p = s2.top();
        s2.pop();
        v.push_back(p->data);
    }
    return v;
}
