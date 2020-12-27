struct node*update(struct node* head,int k)
{
    if(k==0)
    return head;
    
    struct node *p=head;
    struct node *q=NULL;
    //take p to kth node
    int count=1;
    while(count<k && p!= NULL)
    {
        p=p->next;
        count++;
    }
    if(p==NULL)
    return NULL;
    q=p;
    //move p to last node
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next = head;
    head=q->next;
    q->next = NULL;
    
    return head;
}
