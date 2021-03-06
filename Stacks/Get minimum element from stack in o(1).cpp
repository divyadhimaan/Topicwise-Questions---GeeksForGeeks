int _stack :: getMin()
{
   if(s.empty())
        return -1;
    
    else
        return minEle;
    
}

/*returns poped element from stack*/
int _stack ::pop()
{
    if(s.empty())
        return -1;
    
   int y = s.top();
   s.pop();
   int x;
   if(y<minEle)
    {
        x = minEle;
        minEle = 2*minEle - y;
    }
   else
        x = y;
        
    return x;
}

/*push element x into the stack*/
void _stack::push(int x)
{
   if(s.empty())
   {
       s.push(x);
       minEle = x;
   }
   else
   {
       if(x>=minEle)
       {
           s.push(x);
       }
       else
       {
           s.push(2*x - minEle);
           minEle = x;
       }
   }
}

