void push(stack<int>& s, int a){
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	if(s.size() == n)
	    return  true;
	 
	return false;
}

bool isEmpty(stack<int>& s){
	return s.empty();
}

int pop(stack<int>& s){
    if(!s.empty())
    {
        int x = s.top();
    	s.pop();
    	return x;
    }
	return -1;
	
}

int getMin(stack<int>& s){
	if(!s.empty())
	{
        int min = s.top();
        s.pop();
        while(!s.empty())
        {
            int tp = s.top();
            if(tp < min)
            min = tp;
            
            s.pop();
        }
    return min;
    }   
}
