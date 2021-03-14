void in(Node *root,vector<int> *v)
{
    if(root==NULL)
        return;
        
    
    in(root->left,v);
    v->push_back(root->data);
    in(root->right,v);
}
// Return a vector containing the inorder traversal of the tree
vector<int> inOrder(Node* root)
{
    vector<int> v;
    in(root,&v);
    return v;
}
