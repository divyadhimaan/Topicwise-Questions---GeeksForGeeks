int maxLevelSum(Node* root) {
    if(root==NULL)
        return -1;
        
    int result = root->data;
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        int count = q.size();
        
        int sum=0;
        while(count--)
        {
            Node *p = q.front();
            q.pop();
            
            sum += p->data;
            if (p->left != NULL)
                q.push(p->left);
            if (p->right != NULL)
                q.push(p->right);
        }
        result = max(sum,result); 
    }
    return result;
}
