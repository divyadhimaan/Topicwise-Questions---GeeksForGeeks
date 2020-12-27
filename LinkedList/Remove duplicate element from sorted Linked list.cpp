Node *removeDuplicates(Node *root)
{
    Node *p=root;
    Node *temp=NULL;
    if(p==NULL)
    return NULL;
    while(p!=NULL && p->next!=NULL)
    {
        if(p->data == p->next->data)
        {
            temp=p->next->next;
        p->next=temp;
        }
        else
        p=p->next;
        
    }
    return root;
}
