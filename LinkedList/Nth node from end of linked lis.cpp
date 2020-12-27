int getNthFromLast(Node *head, int n)
{
    int len = 0, i; 
    struct Node* p = head; 
  
    // count the number of nodes in Linked List 
    while (p != NULL) { 
        p = p->next; 
        len++; 
    } 
  
    // check if value of n is not 
    // more than length of the linked list 
    if (len < n) 
        return -1; 
  
    p = head; 
  
    // get the (len-n+1)th node from the beginning 
    for (i = 1; i < len - n + 1; i++) 
        p = p->next; 
  
    return p->data; 
}
