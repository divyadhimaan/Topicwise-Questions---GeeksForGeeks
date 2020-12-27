Node *swapkthnode(Node* head, int num, int K)
{
    Node *p=head;
    Node *q=NULL;
    
    if(head==NULL ||head->next==NULL)
    return head;
    
    //if k is valid
    if(K>num)
    return head;
    
    //if k and (n-k+1) are on same node
    if (2 * K - 1 == num) 
        return head;
        
    Node *t=NULL;
    for(int i=0;i<K-1;i++)
    {
        t=p;
        p=p->next;
    }
    
    q=head;
    // count2=count1;
    int k=(num-K+1);
    Node *r=NULL;
    for(int i=0;i<k-1;i++)
    {
        r=q;
        q=q->next;
    }
    if(t)
    t->next = q;
    
    if(r)
    r->next = p;
    
    
    Node *c = p->next;
    p->next = q->next;
    q->next = c;
    
    if (K == 1) 
        head = q; 
    if (K == num) 
        head = p; 
    
    return head;
}

