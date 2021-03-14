int minValue(Node* root)
{
    int min = root->data;
    
    Node *p = root;
    while(p->left!=NULL)
    {
        p = p->left;
        
        if(p->data<min)
            min = p->data;
    }
    
    return min;
}
