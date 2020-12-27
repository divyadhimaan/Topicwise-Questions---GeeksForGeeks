void display(Node *head)
{
   while(head!=NULL)
   {
       cout<<head->data<<" ";
       head=head->next;
   }
}
