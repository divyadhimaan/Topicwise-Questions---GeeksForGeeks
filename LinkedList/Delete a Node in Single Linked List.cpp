Node* deleteNode(Node *head,int x)
{
    if(head==NULL)
    return head;
    if(x==0)
    {
        Node *p = head;
        head=head->next;
        delete p;
    }
    else if(x>0)
    {
        Node *p=head;
        Node *q=NULL;
        for(int i=0;i<=x-1 && p ;i++)
        {
            q=p;
            p=p->next;
            
        }
        q->next=p->next;
        delete p;
    }
    return head;
}

