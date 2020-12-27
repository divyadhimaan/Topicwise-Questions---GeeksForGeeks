Node* addOne(Node *head) 
{
    //reverse LL
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
    
    //add one to leftmost and contiue till carry is zero
    p=head;
    while(p!=NULL)
    {
        p->data = (p->data)+1;
        int carry = (p->data/10);
        if(carry!=0)
        {
            if(p->next!=NULL)
            {
                p->data%=10;
            }
            
            p=p->next;
        }
        else
        break;
    }
    //Again reverse the LL
    q=NULL;
    p=head;
    r=NULL;
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
