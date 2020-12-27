Node* pairWiseSwap(struct Node* head) {
    Node *p=head;
    Node *q=NULL;
    Node *r=NULL;
    int count=2;
    
    while(p!=NULL && count--)
    {
        q = p->next;
        p->next = r;
        r = p;
        p = q;
    }
    
    if(head!=NULL)
    head->next = pairWiseSwap(q);
    return r;
}
