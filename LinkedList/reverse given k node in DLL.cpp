Node* revListInGroupOfGivenSize(Node* head, int k) 
{ 
    Node *current = head; 
    Node* next = NULL; 
    Node* newHead = NULL; 
    int count = 0; 
      
    // reversing the current group of k  
    // or less than k nodes by adding 
    // them at the beginning of list 
    // 'newHead' 
    while (current != NULL && count < k) 
    { 
        next = current->next; 
        push(&newHead, current); 
        current = next; 
        count++; 
    } 
      
    // if next group exists then making the desired 
    // adjustments in the link 
    if (next != NULL) 
    { 
        head->next = revListInGroupOfGivenSize(next, k); 
        head->next->prev = head; 
    } 
      
    // pointer to the new head of the  
    // reversed group 
    return newHead; 
} 
