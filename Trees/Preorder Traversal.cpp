void pre(Node *root,vector<int> *v)
{
    if(root==NULL)
        return;
        
    v->push_back(root->data);
    pre(root->left,v);
    pre(root->right,v);
}

vector<int> preorder(Node* root)
{
  vector<int> v;
    pre(root,&v);
    return v;
}
