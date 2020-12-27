int count(struct node* head, int search_for)
{
    struct node *p=head;
    int count=0;
    if(head!=NULL)
    {
        while(p!=NULL)
        {
            if(p->data == search_for)
            count++;
            p=p->next;
        }
        return count;
    }
}
