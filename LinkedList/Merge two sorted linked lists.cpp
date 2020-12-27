Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node *p=head1;
    Node *q=head2;
    Node *third=NULL;
    Node *last=NULL;
    Node *head=NULL;
    if(p->data<q->data)
    {
            third=p;
            last=p;
            p=p->next;
            last->next=NULL;
            head=last;
    }
    else
    {
             third=q;
             last=q;
             q=q->next;
             last->next=NULL;
             head=last;
    }
    while(p!=NULL && q!=NULL)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
             last->next=q;
             last=q;
             q=q->next;
             last->next=NULL;
        }
    }
    if(p!=NULL)
    last->next=p;
    else
    last->next=q;
    return head;
}  
