int getCount(Node *root, int l, int h)
{
    if(!root)
        return 0;
    
    int left = getCount(root->left,l,h);
    int right = getCount(root->right,l,h);

    if(root->data>=l && root->data<=h)
        return left+right+1;
    else if(left || right)
        return left+right;
    else
        return 0;
}

