bool match(char o,char c)
{
    return ((o=='(' && c==')')  ||  (o=='[' && c==']')  ||  (o=='{' && c=='}'));
}
// Function to return if the paranthesis are balanced or not
bool ispar(string x)
{
   stack<char> s;

   for(int i=0;i<x.length();i++)
   {
       if(x[i]=='(' || x[i]=='[' || x[i]=='{')
       {
           s.push(x[i]);
       }
       else
       {
           if(s.empty())
           return false;
           
           else if(match(s.top(),x[i])==false)
           return false;
           
           else
           s.pop();
           
       }
   }
   return s.empty();
}
