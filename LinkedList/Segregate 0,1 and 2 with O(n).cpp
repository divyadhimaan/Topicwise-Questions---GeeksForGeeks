Node* segregate(Node *head) 
{

    Node* lastone=NULL;
    Node* lastzero=NULL;
    Node* lasttwo=NULL;
    Node* zerohead=NULL;
    Node* onehead=NULL;
    Node* twohead=NULL;
    // create three diff LL for 0, 1 and 2
    while(head)
    {
        if(head->data==1)
        {
            if(lastone==NULL)
            {
                lastone=head;
                onehead=head; //dummy pointer for head
            }
            else
            {
            lastone->next=head;
            lastone=head;
            }
        }
        else if(head->data==0)
        {
            if(lastzero==NULL)
            {
                lastzero=head;
                zerohead=head; ; //dummy pointer for head
            }
            else
            {
                lastzero->next=head;
                lastzero=head;
            }
        }
        else
        {
            if(lasttwo==NULL)
            {
                lasttwo=head;
                twohead=head;  //dummy pointer for head
            }
            else
            {
                lasttwo->next=head;
                lasttwo=head;
            }
        }

        head=head->next;
    }
    
    //merging all three LL
    if(zerohead)
    {
        if(onehead)
        {
            lastzero->next=onehead;
            if(twohead)
            {
                lastone->next=twohead;
                lasttwo->next=NULL;
            }
            else 
                lastone->next=NULL;
        }
        else
        {
            if(twohead)
            {
                lastzero->next=twohead;
                lasttwo->next=NULL;
            }
            else 
                lastzero->next=NULL;
        }
    return zerohead;
    }
    else
    {
        if(onehead)
        {
            if(twohead)
            {
                lastone->next=twohead;
                lasttwo->next=NULL;
            }
            else
            {
                lastone->next=NULL;
            }
            return onehead;
        }
        else
        {
            return twohead;
        }
    }
}

