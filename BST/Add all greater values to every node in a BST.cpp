//cover function for modify
void modifyBST(Node*root,int *sum)
{
    if(root==NULL)
        return;
        
    modifyBST(root->right,sum);
    
    *sum = *sum + root->data;
    root-> data = *sum;
    
    modifyBST(root->left,sum);
}
// modify the BST and return its root
Node* modify(Node *root)
{
    int sum = 0;
    modifyBST(root,&sum);
    return root;
}
