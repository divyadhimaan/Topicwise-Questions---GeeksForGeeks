class Solution {
public:

    void deleteMid(stack<int>&s, int sizeOfStack, int curr = 0)
    {
        if(s.empty() || curr==sizeOfStack)
            return;
            
        int x = s.top();
        s.pop();
        
        deleteMid(s,sizeOfStack,curr+1);
        
        if(curr!=sizeOfStack/2)
            s.push(x);
    }
};
