struct Node* reverseList(struct Node *head)
{     //sliding pointer approach
    struct Node* q = NULL;
    struct Node* p = head;
    struct Node* r = NULL;
    while (p != NULL) {
        
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head=q;
    return head;
}
