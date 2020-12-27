int countNodesinLoop(struct Node *head)
{
    struct Node *p=head;
    struct Node *q=head;
    if(head==NULL)
        return 0;
    else
    {
        do
        {
            p=p->next;
            q=q->next;
            q=(q!=NULL?q->next:NULL);
        }while(p && q && p!=q);
        if(p==q)
        {
            int res = 1;  
            struct Node *temp = p;  
            while (temp->next != p)  
            {  
                res++;  
                temp = temp->next;  
            }  
            return res;  
        }
        else 
            return 0;
    }
}
