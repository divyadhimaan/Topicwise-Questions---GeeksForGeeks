int intersectPoint(Node* head1, Node* head2)
{
    int c1=1,c2=1;
    if(head1==NULL  || head2==NULL)
        return -1;
        
    Node *p=head1;
    Node *q=head2;
    
    
    while(p->next!=NULL)
    {
        c1++;
        p=p->next;
    }
    while(q->next!=NULL)
    {
        c2++;
        q=q->next;
    }
    
    int d = abs(c1-c2);
    p=head1;
    q=head2;
    //move larger list 
    if(c1>c2)
    {
        for(int i=0;i<d;i++)
        {
            if(p->next==NULL)
                return -1;
            p=p->next;
        }
    }
    else
    {
        for(int i=0;i<d;i++)
        {
            if(q->next==NULL)
                return -1;
            q=q->next;
        }
    }
    
    //now both list have equal nodes left;
    // q=head2;
    while(p!=NULL || q!=NULL)
    {
        if(p==q)
        return p->data;
        p=p->next;
        q=q->next;
        
    }
    
        return -1;
}


