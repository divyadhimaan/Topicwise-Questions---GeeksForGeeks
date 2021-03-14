void leafsum(Node *root,int &sum)
{
    if(root)
    {
        if(root->left==NULL && root->right==NULL)
        {
            sum += root->data;
        }
        leafsum(root->left,sum);
        leafsum(root->right,sum);
    }
}

int sumLeaf(Node* root)
{
    int sum=0;
    leafsum(root,sum);
    return sum;
}
