void reorderList(Node* head) {
    Node *q=head;
    Node *p=head;
    
    Node *head1=head;
    Node *head2=NULL;
    
    if(head==NULL)
    return;
    
    //split in two halves
    while(p->next!=NULL && p->next->next!=NULL)
    {
        q=q->next;
        p=p->next->next;
    }
    
    head2 = q->next;
    q->next = NULL;
    
    //reverse the other half
    q = NULL;
    p = head2;
    Node* r = NULL;
    while (p != NULL) {
        // Store next
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head2=q;

    //merge the two using alternative elements
    while(head2!=NULL)
    {
        p = head1->next;
        q = head2->next;
        head1->next = head2;
        head2->next = p;
        head2 = q;
        head1 = p;
    }
    
}
