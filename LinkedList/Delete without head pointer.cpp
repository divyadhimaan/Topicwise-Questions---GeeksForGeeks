void deleteNode(Node *node)
{
   Node *p=node;
   Node *q=NULL;
   while(p->next!=NULL)
   {
       int temp=p->data;
       p->data=p->next->data;
       p->next->data=temp;
       q=p;
       p=p->next;
   }
   delete p;
    q->next=NULL;
}
