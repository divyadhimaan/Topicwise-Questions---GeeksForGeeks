int GetNth(struct node* head, int index){
  for(int i=1;i<index;i++)
  {
      head=head->next;
  }
  return head->data;
}
