/*You are required to complete below methods*/

/*the function pushes an element
x into the stack s */
void push(stack<int> &s,int x)
{
    s.push(x);
}

/*pops the top element of the
stack and returns it */
int pop(stack<int> &s)
{
    if(s.empty()==true)
        return -1;
        
    int x = s.top();
    s.pop();
    return x;
}

/*returns the size of the stack */
int getSize(stack<int> &s)
{
   if(s.empty()==true)
        return 0;
        
    return s.size();
}

/*returns the top element 
of the stack */
int getTop(stack<int> &s)
{
   if(s.empty()==true)
        return -1;
    
    return s.top();
}
