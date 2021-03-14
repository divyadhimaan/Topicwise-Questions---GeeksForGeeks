// function should print the nodes at k distance from root
void print(Node *root,int k,vector<int> &v)
{
    if(root==NULL)
        return;
        
    if(k==0)
    {
        v.push_back(root->data);
        return;
    }
    
    print(root->left,k-1,v);
    print(root->right,k-1,v);
}

vector<int> Kdistance(struct Node *root, int k)
{
    vector<int> v;
    print(root,k,v);
    return v;
}
