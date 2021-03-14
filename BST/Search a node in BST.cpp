bool search(Node* root, int x)
{
    while(root!=NULL)
    {
        if(x == root->data)
            return 1;
        else if(x < root->data)
            root=root->left;
        else
            root=root->right;
    }
    return 0;
}
