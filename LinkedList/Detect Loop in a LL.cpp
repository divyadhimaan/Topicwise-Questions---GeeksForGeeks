bool detectLoop(Node* head)
{
    struct Node *p=head;
    struct Node *q=head;
    if(head==NULL)
        return 0;
    else
    {
        do
        {
            p=p->next;
            q=q->next;
            q=(q!=NULL?q->next:NULL);
        }while(p && q && p!=q);
        if(p==q)
        return 1;
        else 
        return 0;
    }
}
