void MyStack ::push(int x) {
    StackNode *temp = new StackNode(x);
    temp->next=top;
    top=temp;
}


int MyStack ::pop() {
    if(!top) 
        return -1;
    StackNode* temp=top;
    top=top->next;
    int data=temp->data;
    free(temp);
    return data;
}
