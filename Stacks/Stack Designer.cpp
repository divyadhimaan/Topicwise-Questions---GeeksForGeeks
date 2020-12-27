stack<int>_push(int arr[],int n)
{
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        st.push(arr[i]);
        
    }
    return st;
   //return a stack with all elements of arr inserted in it
}

/* _pop function to print elements of the stack
   remove as well
*/
void _pop(stack<int> s)
{
    while (!s.empty()) { 
        cout  << s.top() << " "; 
        s.pop(); 
    } 
    //print top and pop for each element until it becomes empty
}
