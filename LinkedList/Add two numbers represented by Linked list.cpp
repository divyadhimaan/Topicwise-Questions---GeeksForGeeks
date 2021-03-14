Node* addSameSize(Node* head1, Node* head2, int* carry) 
{ 
	if (head1 == NULL)
        return NULL;
 
    int sum;
 
    // Allocate memory for sum node of current two nodes
    Node* result = new Node(0);
 
    // Recursively add remaining nodes and get the carry
    result->next
        = addSameSize(head1->next, head2->next, carry);
 
    // add digits of current nodes and propagated carry
    sum = head1->data + head2->data + *carry;
    *carry = sum / 10;
    sum = sum % 10;
 
    // Assigne the sum to current node of resultant list
    result->data = sum;
 
    return result;
} 

