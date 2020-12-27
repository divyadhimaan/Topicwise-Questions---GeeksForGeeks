Node* reverseDLL(Node * head)
{
    Node *p = head;
    Node *temp = NULL;
    
    while(p!=NULL)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        head=p;
        p=temp;
        
    }
    return head;
}
