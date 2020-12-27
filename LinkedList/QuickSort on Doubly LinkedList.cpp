Node* partition(Node *l, Node *h){
    Node *q = l->prev;
    int x = h->data;
    for (Node *p = l; p != h; p = p->next)  
    {
        if(p->data <= x)
        {
            q = (q==NULL)?l:q->next;
            swap(&(q->data),&(p->data));
        }
    }
    q = (q==NULL)?l:q->next;
    swap(&(q->data),&(h->data));
    return q;
    

}
