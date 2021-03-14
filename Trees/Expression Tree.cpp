int evalTree(node* root) 
{
    if(root==NULL)
    return 0;
    
    if(root->data!="*" and root->data!="/" and root->data!="+" and root->data!="-")
    {
        stringstream s(root->data);
        int x;
        s>>x;
        return x;
    }
    
    if(root->data=="+")
        return evalTree(root->left)+evalTree(root->right);
    if(root->data=="-")
        return evalTree(root->left)-evalTree(root->right);
    if(root->data=="*")
        return evalTree(root->left)*evalTree(root->right);
    if(root->data=="/")
        return evalTree(root->left)/evalTree(root->right);
}

