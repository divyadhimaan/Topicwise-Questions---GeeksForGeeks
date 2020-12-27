int getCount(struct Node* head){
    int count=0;
    Node *p;
    p=head;
    if(p==NULL)
    return 0;
    while(p!=NULL)
    {
        p=p->next;
        count++;
    }
    return count;

}

