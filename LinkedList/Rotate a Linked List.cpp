Node* rotate(Node* head, int k)
{
    struct Node *p=head;
    if(k==0)
    return head;
    while(p->next!=NULL)
    p=p->next;
    
    p->next=head;
    p=head;
    
    for(int i=0;i<k-1;i++)
    {
        p=p->next;
    }
    head=p->next;
    p->next=NULL;
    return head;
}
