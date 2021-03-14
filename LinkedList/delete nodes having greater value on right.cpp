Node *compute(Node *head)
{
    Node* q = NULL;
    Node* p = head;
    Node* r = NULL;
    while (p != NULL) {
        // Store next
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head=q;
    
    p=head;
    Node *max = head;
    while(p!=NULL && p->next!=NULL)
    {
        if(p->next->data < max->data)
        {
            q=p->next;
            p->next=q->next;
            delete q;
        }
        else
        {
            p=p->next;
            max = p;
        }
    }
    
    
    q = NULL;
    p = head;
    r = NULL;
    while (p != NULL) {
        // Store next
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head=q;
    return head;
}

