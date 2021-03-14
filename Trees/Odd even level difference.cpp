int getLevelDiff(Node *root)
{
   if(root==NULL)
    return 0;
    
    if(root->left==NULL && root->right==NULL)
        return root->data;
        
   return root->data - getLevelDiff(root->left) - getLevelDiff(root->right);
}

