Node* findIntersection(Node* head1, Node* head2)
{
    if(head1==NULL || head2==NULL)
        return NULL;
        
    //advance smaller list
    if(head1->data < head2->data)
        return findIntersection(head1->next,head2);
    if(head1->data > head2->data)
        return findIntersection(head1,head2->next);
        
    //if head1->data==head2->data
    Node *temp = new Node(head1->data);
    
    //advance both LL
    temp->next = findIntersection(head1->next,head2->next);
    
    return temp;
}
